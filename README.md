# C Programming Journey

A growing collection of C programs, coding exercises, and small command-line projects. This repository follows my progress as a first-year Electronics and Computer Science Engineering student learning C by writing and improving programs.

## Start here

If you are new to the repository, follow the folders in this order:

1. **Fundamentals** — start with the first program, then explore variables, input/output, operators, conditions, loops, functions, and arrays.
2. **Problem solving** — see how those concepts are used in short practice exercises and HackerRank problems.
3. **Projects** — browse small programs that combine multiple concepts.

Most files are standalone C programs. Compile and run one source file at a time rather than compiling every file in the repository together.

## Repository map

| Folder | What you will find |
| --- | --- |
| [01-fundamentals](01-fundamentals/) | Beginner topics arranged in a learning sequence. |
| [02-problem-solving](02-problem-solving/) | HackerRank exercises and standalone coding practice. |
| [03-projects](03-projects/) | Small command-line programs and games. |

## Topic index

### 01 — Fundamentals

| Topic | Examples in this repository |
| --- | --- |
| [First program](01-fundamentals/01-first-program/) | A first C program using main() and printf(). |
| [Variables and data types](01-fundamentals/02-variables-and-data-types/) | Integer, floating-point, character, and boolean variables. |
| [Input and output](01-fundamentals/03-input-and-output/) | User input and formatted output / format specifiers. |
| [Operators and maths](01-fundamentals/04-operators-and-math/) | Arithmetic operators, logical operators, and maths-library functions. |
| [Conditionals](01-fundamentals/05-conditionals/) | if statements and switch statements. |
| [Loops](01-fundamentals/06-loops/) | while, nested loops, break, and continue. |
| [Functions](01-fundamentals/07-functions/) | Functions and function prototypes. |
| [Arrays and strings](01-fundamentals/08-arrays-and-strings/) | Arrays, user input with arrays, strings, and 2D arrays. |

### 02 — Problem solving

| Section | Exercises |
| --- | --- |
| [HackerRank](02-problem-solving/hackerrank/) | Hello World; Playing with Characters. |
| [Standalone practice](02-problem-solving/standalone/) | Sum and Difference of Two Numbers; Functions in C; Pointers in C. |

### 03 — Projects

| File | What it does |
| --- | --- |
| [Calculator](03-projects/01-calculator.c) | Performs basic arithmetic operations. |
| [Circle Calculator](03-projects/02-circle-calculator.c) | Performs calculations related to a circle. |
| [Compound Interest Calculator](03-projects/03-compound-interest-calculator.c) | Calculates compound interest. |
| [Temperature Converter](03-projects/04-temperature-converter.c) | Converts temperature values. |
| [Weight Converter](03-projects/05-weight-converter.c) | Converts between weight units. |
| [Shopping Cart](03-projects/06-shopping-cart.c) | Takes item details and calculates a total. |
| [Banking Program](03-projects/07-banking-program.c) | Demonstrates basic balance, deposit, and withdrawal operations. |
| [Mad Libs Game](03-projects/08-mad-libs-game.c) | Builds a short story from user-provided words. |
| [Number Guessing Game](03-projects/09-number-guessing-game.c) | A number-guessing game using random numbers and conditions. |
| [Rock Paper Scissors](03-projects/10-rock-paper-scissors.c) | A command-line game against the computer. |

## Run a program

### 1. Check that a C compiler is installed

This repository uses standard .c source files. The examples below use GCC. On Windows, GCC is commonly available through MinGW-w64 or MSYS2.

### 2. Compile one file

From the repository root, run:

~~~bash
gcc 01-fundamentals/01-first-program/first-program.c -o first-program
~~~

### 3. Run it

On Windows PowerShell:

~~~powershell
.\first-program.exe
~~~

On macOS or Linux:

~~~bash
./first-program
~~~

To compile a different example, replace the source-file path and output name. Some HackerRank submissions expect input in the format specified by the problem, so read the comments in the source file before running them.

## What is in the repository right now?

- Beginner examples covering variables, input/output, operators, conditions, loops, functions, arrays, and strings.
- Short practice programs, including HackerRank exercises and pointer/function exercises.
- Ten small command-line projects and games.

This is a learning repository, so the code may show different stages of practice. The examples are kept as part of the learning process rather than presented as a finished C reference manual.

## Next topics to explore

- More practice with arrays, strings, and pointers.
- Structures (struct) and file handling.
- Dynamic memory allocation.
- Data structures and algorithms.
- Small embedded-systems experiments as my C fundamentals develop.

## About

I'm learning C as part of my Electronics and Computer Science Engineering journey. I use this repository to keep my code organised, revisit earlier examples, practise problem solving, and track what I build over time.

**One program at a time.**