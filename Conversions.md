# Conversion Cheat Sheet

## Binary to Decimal

- **Method:** Multiply each binary digit by $2^n$ (where $n$ is its position, starting from 0 at right), then sum.
- **Example:**
$1101_2 = 1 \times 2^3 + 1 \times 2^2 + 0 \times 2^1 + 1 \times 2^0 = 8 + 4 + 0 + 1 = 13_{10}$

## Binary to Octal

- **Method:** Group binary digits in sets of 3 (from right), convert each group to its octal equivalent.
- **Example:**
$110101_2 = 110|101 = 6|5 = 65_8$

## Binary to Hexadecimal

- **Method:** Group binary digits in sets of 4 (from right), convert each group to its hexadecimal equivalent.
- **Example:**
$11010110_2 = 1101|0110 = D|6 = D6_{16}$

---

## Decimal to Octal

- **Method:** Divide decimal number by 8, record remainders, write remainders in reverse order.
- **Example:**
$26_{10} \rightarrow 26 \div 8 = 3$ remainder $2$, $3 \div 8 = 0$ remainder $3$
$= 32_8$

## Decimal to Hexadecimal

- **Method:** Divide decimal number by 16, record remainders, write remainders in reverse order (use letters A-F for 10-15).
- **Example:**
$255_{10} \rightarrow 255 \div 16 = 15$ remainder $15$, $15 \div 16 = 0$ remainder $15$
$= FF_{16}$

## Decimal to Binary

- **Method:** Divide decimal number by 2, record remainders, write remainders in reverse order.
- **Example:**
$13_{10} \rightarrow 13 \div 2 = 6$ remainder $1$, $6 \div 2 = 3$ remainder $0$, $3 \div 2 = 1$ remainder $1$, $1 \div 2 = 0$ remainder $1$
$= 1101_2$

---

## Hexadecimal to Octal

- **Method:**

1. **Option 1:** Convert hex to binary (each digit to 4 bits), group binary in sets of 3 (from right), convert to octal.
2. **Option 2:** Convert hex to decimal, then decimal to octal.

- **Example:**
$1BC_{16} \rightarrow 0001|1011|1100_2 = 000|110|111|100_2 = 0|6|7|4_8 = 674_8$

## Hexadecimal to Binary

- **Method:** Convert each hexadecimal digit to its 4-bit binary equivalent.
- **Example:**
$A3_{16} = 1010|0011_2 = 10100011_2$

## Hexadecimal to Decimal

- **Method:** Multiply each digit by $16^n$ (where $n$ is its position, starting from 0 at right), then sum.
- **Example:**
$1A_{16} = 1 \times 16^1 + 10 \times 16^0 = 16 + 10 = 26_{10}$

---

## Octal to Binary

- **Method:** Convert each octal digit to its 3-bit binary equivalent.
- **Example:**
$56_8 = 101|110_2 = 101110_2$

## Octal to Hexadecimal

- **Method:**

1. **Option 1:** Convert octal to binary, group binary in sets of 4 (from right), convert to hexadecimal.
2. **Option 2:** Convert octal to decimal, then decimal to hexadecimal.

- **Example:**
$56_8 = 101110_2 = 0010|1110_2 = 2|E_{16} = 2E_{16}$

## Octal to Decimal

- **Method:** Multiply each digit by $8^n$ (where $n$ is its position, starting from 0 at right), then sum.
- **Example:**
$16_8 = 1 \times 8^1 + 6 \times 8^0 = 8 + 6 = 14_{10}$

---

## Summary Table

| Conversion | Method/Steps |
| :-- | :-- |
| Binary → Decimal | Multiply each bit by $2^n$, sum results. |
| Binary → Octal | Group bits in 3s (right to left), convert each group to octal. |
| Binary → Hexadecimal | Group bits in 4s (right to left), convert each group to hex. |
| Decimal → Octal | Divide by 8, record remainders, write in reverse. |
| Decimal → Hexadecimal | Divide by 16, record remainders (A-F for 10-15), write in reverse. |
| Decimal → Binary | Divide by 2, record remainders, write in reverse. |
| Hexadecimal → Octal | Hex → Binary (4 bits/digit), group binary in 3s, convert to octal. |
| Hexadecimal → Binary | Convert each hex digit to 4 bits. |
| Hexadecimal → Decimal | Multiply each digit by $16^n$, sum results. |
| Octal → Binary | Convert each octal digit to 3 bits. |
| Octal → Hexadecimal | Octal → Binary (3 bits/digit), group binary in 4s, convert to hex. |
| Octal → Decimal | Multiply each digit by $8^n$, sum results. |

## Video Tutorials

[Binary → Decimal](https://youtu.be/6Tt-RA6KD30?si=Awqnu7tpnThzcUZL)
[Binary → Octal](https://youtu.be/urasJ3jx08I?si=QzAfDgDAZ8j8Fnoh)
[Binary → Hexadecimal](https://youtu.be/hGsJQ6KtBfI?si=pf0wPPFqdduuwqj4)
[Decimal → Octal](https://youtu.be/1J89-aWI-5Y?si=mTfi5y66JjZYkqxG)
[Decimal → Hexadecimal](https://youtu.be/uVpQ9pPskNI?si=zfd879T2Wtbwfzz0)
[Decimal → Binary](https://youtu.be/VRNc6uyHhys?si=_44Jd9WTrp_UKuFh)
[Hexadecimal → Octal](https://youtu.be/s9kwJ03uzmE?si=-9LoE3ITDMjTjfk7)
[Hexadecimal → Binary](https://youtu.be/WI6Uvci2p7E?si=RNc7Q5-F03oWxQYA)
[Hexadecimal → Decimal](https://youtu.be/1tHgs0mrZ5I?si=MVDtCVSnH17Y92u4)
[Octal → Binary](https://youtu.be/urasJ3jx08I?si=QzAfDgDAZ8j8Fnoh)
[Octal → Hexadecimal](https://youtu.be/s9kwJ03uzmE?si=-9LoE3ITDMjTjfk7)
[Octal → Decimal](https://youtu.be/6WGTf0fg4zA?si=MNf1tQWyBgVILK9G)
