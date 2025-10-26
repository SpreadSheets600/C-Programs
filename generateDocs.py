import os
import yaml
import shutil
import pathlib

SOURCE_DIR = "."
DOCS_DIR = ".github/docs"
MKDOCS_FILE = "mkdocs.yml"
OVERRIDES_DIR = "overrides"
ASSETS_DIR = os.path.join(DOCS_DIR, "assets")
CUSTOM_CSS = os.path.join(ASSETS_DIR, "extra.css")

ALLOWED_EXT = (
    ".md",
    ".ipynb",
    ".png",
    ".jpg",
    ".jpeg",
    ".gif",
    ".svg",
    ".cpp",
    ".c",
    ".h",
    ".hpp",
    ".txt",
    ".css",
)

CODE_WRAP_EXTS = (".cpp", ".c", ".h", ".hpp", ".py")
IGNORE_FILES = {"generateDocs.py", "generateREADME.py"}


def wrap_code_as_md(src_path, dest_path):
    lang = pathlib.Path(src_path).suffix.lstrip(".")
    with open(src_path, encoding="utf-8", errors="ignore") as src, open(
        dest_path, "w", encoding="utf-8"
    ) as md:
        md.write(f"# {os.path.basename(src_path)}\n\n```{lang}\n")
        md.write(src.read())
        md.write("\n```\n")


def copy_docs():
    if os.path.exists(DOCS_DIR):
        shutil.rmtree(DOCS_DIR)
    os.makedirs(DOCS_DIR, exist_ok=True)

    skip_dirs = {DOCS_DIR, ".git", ".github", ".vscode", "site", OVERRIDES_DIR}

    for root, _, files in os.walk(SOURCE_DIR):
        if any(skip in root for skip in skip_dirs):
            continue

        rel_path = os.path.relpath(root, SOURCE_DIR)
        dest_path = os.path.join(DOCS_DIR, rel_path)
        os.makedirs(dest_path, exist_ok=True)

        for file in files:
            if file in IGNORE_FILES:
                continue

            file_lower = file.lower()
            if file_lower.endswith(ALLOWED_EXT):
                src_file = os.path.join(root, file)
                shutil.copy2(src_file, os.path.join(dest_path, file))

                if file_lower.endswith(CODE_WRAP_EXTS):
                    md_name = os.path.splitext(file)[0] + ".md"
                    wrap_code_as_md(src_file, os.path.join(dest_path, md_name))


def ensure_custom_css():
    os.makedirs(ASSETS_DIR, exist_ok=True)

    if not os.path.exists(CUSTOM_CSS):
        css_content = """
.md-main__inner {
    max-width: 2000px;
    margin-left: auto !important;
    margin-right: auto !important;
}

.md-content {
    padding-left: 2rem !important;
    padding-right: 2rem !important;
    border-left: 1px solid rgba(64, 81, 181, 0.5) !important;
    border-right: 1px solid rgba(64, 82, 181, 0.5) !important;
}
"""
        with open(CUSTOM_CSS, "w", encoding="utf-8") as f:
            f.write(css_content)


def ensure_mkdocs_extra_css():
    if not os.path.exists(MKDOCS_FILE):
        print(f"⚠ {MKDOCS_FILE} Not Found!")
        return

    with open(MKDOCS_FILE, encoding="utf-8") as f:
        config = yaml.safe_load(f) or {}

    extra_css_list = config.get("extra_css", [])

    css_path = f"assets/{os.path.basename(CUSTOM_CSS)}"
    if css_path not in extra_css_list:
        extra_css_list.append(css_path)
        config["extra_css"] = extra_css_list

        with open(MKDOCS_FILE, "w", encoding="utf-8") as f:
            yaml.dump(config, f, sort_keys=False)

        print(f"✅ Added {css_path} to {MKDOCS_FILE}")


def scan_dir(base_dir):
    md_ext = (".md", ".ipynb")

    def scan_folder(path):
        entries = list(os.scandir(path))
        dirs = sorted([e for e in entries if e.is_dir()], key=lambda d: d.name.lower())
        files = sorted(
            [e for e in entries if e.is_file()], key=lambda f: f.name.lower()
        )

        md_files = [f.name for f in files if f.name.lower().endswith(md_ext)]

        if not md_files and not dirs:
            return []

        section_title = (
            os.path.basename(path)
            if os.path.abspath(path) != os.path.abspath(base_dir)
            else "Home"
        )

        pages = []

        if "README.md" in md_files:
            pages.append(
                {
                    section_title: os.path.relpath(
                        os.path.join(path, "README.md"), base_dir
                    )
                }
            )

        for f in md_files:
            if f.lower() == "readme.md":
                continue
            title = os.path.splitext(f)[0].replace("-", " ")
            pages.append({title: os.path.relpath(os.path.join(path, f), base_dir)})

        for d in dirs:
            subnav = scan_folder(d.path)
            if subnav:
                pages.append({d.name: subnav})

        if os.path.abspath(path) == os.path.abspath(base_dir):
            return pages

        return pages

    return scan_folder(base_dir)

def build_mkdocs(nav_entries):
    return {
        "site_name": "C DSA Programs",
        "docs_dir": DOCS_DIR,
        "theme": {
            "name": "material",
            "palette": [
                {
                    "scheme": "default",
                    "primary": "indigo",
                    "accent": "pink",
                    "toggle": {
                        "icon": "material/weather-night",
                        "name": "Switch to dark mode",
                    },
                },
                {
                    "scheme": "slate",
                    "primary": "indigo",
                    "accent": "pink",
                    "toggle": {
                        "icon": "material/weather-sunny",
                        "name": "Switch to light mode",
                    },
                },
            ],
            "features": [
                "navigation.instant",
                "navigation.expand",
                "navigation.sections",
                "navigation.path",
                "navigation.prune",
                "search.highlight",
                "search.suggest",
                "content.code.copy",
            ],
        },
        "markdown_extensions": [
            "admonition",
            "codehilite",
            "footnotes",
            "tables",
            "toc",
            {
                "pymdownx.highlight": {
                    "anchor_linenums": True,
                    "linenums": True,
                    "linenums_style": "table",
                    "use_pygments": True,
                }
            },
            "pymdownx.superfences",
        ],
        "extra_css": [f"assets/{os.path.basename(CUSTOM_CSS)}"],
        "plugins": [
            "search",
            "offline",
            "tags",
            {"mkdocs-jupyter": {"include": ["*.ipynb"]}},
        ],
        "repo_url": "https://github.com/SpreadSheets600/C-DSA-Programs",
        "repo_name": "C-DSA-Programs",
        "nav": nav_entries,
    }


if __name__ == "__main__":
    copy_docs()
    ensure_custom_css()
    ensure_mkdocs_extra_css()

    nav = scan_dir(DOCS_DIR)
    config = build_mkdocs(nav)

    with open(MKDOCS_FILE, "w", encoding="utf-8") as f:
        yaml.dump(config, f, sort_keys=False)

    print("✅ MkDocs configuration generated successfully with custom CSS support!")
