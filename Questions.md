# Questions

## What is Pointer?

A pointer is a variable that stores the memory address of another variable as its value. In C, you declare a pointer using the `*` operator. Pointers allow you to directly access and manipulate data in memory, which can make your programs more efficient and flexible. For example:

```c
int myAge = 43;
int* ptr = &myAge; // ptr now stores the address of myAge
```

Pointers are especially useful for working with dynamic data structures and managing memory.

---

## What is Structure? What is Array of Structure?

**Structure:**  
A structure (struct) is a way to group several related variables (called members) into one place. Unlike arrays, a structure can contain variables of different data types (like `int`, `float`, `char`).

```c
struct MyStructure {
    int myNum;
    char myLetter;
};
```

You access structure members using the dot (`.`) operator.

**Array of Structure:**  
An array of structure is a collection of structures, where each element of the array is a structure itself. This is useful for storing multiple records (like student data).

```c
struct student {
    char name[50];
    int roll_no;
    float marks;
};
struct student class[10]; // array of 10 students
```

You can access each student’s data using the array index and the dot operator.

---

## What is Recursion? Finding Factorial of Number Using Recursion?

**Recursion:**  
Recursion is when a function calls itself to solve a problem. It breaks down a problem into smaller, similar sub-problems until it reaches a base case.

**Factorial Using Recursion:**  
Factorial of a number $$ n $$ ($$ n! $$) is $$ n \times (n-1) \times (n-2) \times \ldots \times 1 $$. Here’s how you can find it using recursion in C:

```c
int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
```

This function calls itself until `n` becomes 0.

---

## Write Short Note on Function

A function is a block of code that performs a specific task. It can take input (parameters), process it, and return a result. Functions help organize code, make it reusable, and easier to maintain.

```c
int add(int a, int b) {
    return a + b;
}
```

---

## What is Operating System? What are the Function of Operating System?

**Operating System (OS):**  
An operating system is system software that manages computer hardware and software resources and provides services for computer programs.

**Functions of Operating System:**  

- **Process Management:** Manages running programs and allocates resources.
- **Memory Management:** Allocates and manages computer memory.
- **File System Management:** Organizes, stores, and manages files on disk.

---

## Write Short Note on Type Casting

Type casting is converting a variable from one data type to another. In C, you can use the cast operator `(type)` to do this.

```c
int a = 5;
float b = (float)a; // converts int to float
```

Type casting is useful when you need to perform operations between different data types.

---

## What is Conditional Operator?

The conditional operator (also called the ternary operator) is a shorthand for an if-else statement. It has the form:

```c
condition ? expression1 : expression2
```

If `condition` is true, `expression1` is executed; otherwise, `expression2` is executed.

```c
int max = (a > b) ? a : b; // assigns the larger of a or b to max
```

---

## Difference Between Array and Structure

| Aspect                 | Array                                             | Structure                                         |
|------------------------|--------------------------------------------------|--------------------------------------------------|
| Data Types             | Stores elements of the **same** data type        | Stores elements of **different** data types      |
| Declaration Syntax     | `data_type array_name[size];`                     | `struct struct_name { data_type1 ele1; ... };`   |
| Access Operator        | Uses **square brackets** `[ ]`                    | Uses **dot operator** `.`                         |
| Memory Allocation      | Elements stored in **contiguous** memory          | Members may or may not be contiguous              |
| Size                   | Fixed size based on number of elements             | Size depends on sum of sizes of all members       |
| Traversal & Search     | Faster and simpler                                | Slower and more complex                            |
| Pointer Behavior       | Array name acts like a pointer to first element  | Structure name is not a pointer                    |
| Keyword Used           | None                                              | Uses keyword `struct`                              |
| Homogeneity           | Homogeneous elements                              | Heterogeneous elements                             |

*Summary:* Arrays hold multiple values of the same type efficiently, while structures group different types under one name for complex data representation.

---

## Difference Between Structure and Union

| Aspect                | Structure                                         | Union                                             |
|-----------------------|--------------------------------------------------|---------------------------------------------------|
| Memory Allocation     | Separate memory for each member                   | Shared memory for all members (size = largest member) |
| Size                  | Sum of sizes of all members                        | Size of largest member                             |
| Data Storage          | Can store values for all members simultaneously   | Can store value for only one member at a time     |
| Access                | All members accessible anytime                     | Only last stored member accessible                 |
| Modification Impact   | Changing one member does not affect others         | Changing one member affects others                 |
| Initialization        | Multiple members can be initialized simultaneously | Only one member can be initialized at a time      |
| Use Case              | When all members need to be stored and accessed    | When memory saving is critical and only one member needed at a time |

*Summary:* Structures are versatile and store all members separately, while unions are memory-efficient but store only one member’s value at a time.

---

## Difference Between Do-While and While Loop

| Aspect                  | While Loop                                        | Do-While Loop                                    |
|-------------------------|--------------------------------------------------|-------------------------------------------------|
| Condition Checking      | Condition checked **before** executing loop body | Condition checked **after** executing loop body |
| Execution Guarantee     | May execute zero times if condition is false     | Executes loop body at least once                  |
| Syntax Ending          | No semicolon after closing brace                  | Semicolon required after `while(condition);`     |
| Use Case               | When execution depends on condition upfront       | When loop body must run at least once             |

*Summary:* While loops check the condition first, so may not run at all if false. Do-while loops run once before checking condition.

---

## Difference Between Break and Continue Statement

| Aspect                  | Break                                             | Continue                                         |
|-------------------------|--------------------------------------------------|-------------------------------------------------|
| Functionality           | Exits the entire loop or switch immediately      | Skips remaining statements in current iteration, moves to next iteration |
| Applicable In           | Loops and switch statements                       | Only loops (for, while, do-while)                |
| Control Transfer        | Exits loop/switch completely                      | Jumps to loop condition check or increment step |
| Usage                  | To terminate loop early (e.g., on error or condition) | To skip specific iteration(s) without exiting loop |

*Summary:* `break` stops the loop entirely; `continue` skips to the next iteration without exiting the loop.

---

## Difference Between Compiler and Interpreter

| Aspect                  | Compiler                                          | Interpreter                                     |
|-------------------------|--------------------------------------------------|------------------------------------------------|
| Translation             | Translates entire program at once                 | Translates program line-by-line                 |
| Execution Speed         | Faster execution after compilation                | Slower execution, translates during runtime    |
| Error Detection         | Shows all errors after scanning whole program     | Shows errors one at a time during execution     |
| Output                  | Generates object code (machine code)               | Does not generate object code                    |
| Source Code Requirement | Does not need source code after compilation        | Needs source code every time during execution    |
| Memory Usage            | Larger size                                        | Smaller size                                     |
| Examples                | C, C++, Java (compiled)                            | Python, Ruby, MATLAB (interpreted)               |

*Summary:* Compiler translates whole program before execution, making it faster; interpreter translates and executes line-by-line, making it easier to debug but slower.

---

## Difference Between Call by Value and Call by Reference

| Aspect                  | Call by Value                                     | Call by Reference                               |
|-------------------------|-------------------------------------------------|------------------------------------------------|
| Parameter Passing       | Passes a copy of the value                        | Passes the address/reference of the variable   |
| Effect on Original Data | Changes inside function do **not** affect original | Changes inside function **affect** original     |
| Memory Usage           | More memory (copy created)                         | Less memory (no copy, uses original)            |
| Safety                 | Safer, original data protected                     | Riskier, original data can be unintentionally changed |
| Speed                  | Slightly slower due to copying                      | Generally faster, especially for large data     |
| Usage                  | When you want to protect original data             | When you want to modify original data            |

*Summary:* Call by value sends a copy to the function, so original data stays unchanged; call by reference sends the actual address, so changes affect the original variable.

---
