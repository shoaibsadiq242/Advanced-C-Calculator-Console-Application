# Advanced C++ Calculator

A console-based advanced calculator implemented in C++ that performs a variety of operations including arithmetic, modulus, power, factorial, prime check, averaging numbers, and sorting.

---

## Features

* Addition, Subtraction, Multiplication, Division
* Modulus operation for integers
* Power calculation (a^b) using loops
* Factorial calculation
* Prime number check
* Average of multiple numbers
* Sorting numbers in ascending or descending order
* User-friendly prompts and dynamic input handling

---

## Prerequisites

* C++ compiler (GCC, Clang, or MSVC)
* Terminal or command prompt

---

## How to Run

```bash
# Clone the repository
git clone <your-repo-link>
cd <repository-folder>

# Compile the program
g++ main.cpp -o calculator

# Run the program
./calculator      # Linux / Mac
calculator.exe    # Windows
```

---

## How to Use

1. Run the program.
2. Choose an operation from the menu by entering the corresponding number.
3. Follow the guided prompts to enter your numbers.
4. The result will be displayed on the screen.
5. After completing an operation, the menu will reappear to perform additional calculations or exit.

---

## Project Structure

* `main.cpp` – contains all program logic

  * `power()` – calculates base^exponent using loops
  * `factorial()` – calculates factorial of a number
  * `isPrime()` – checks if a number is prime
  * `averageNumbers()` – calculates average of user-entered numbers
  * `sortNumbers()` – sorts user-entered numbers in ascending or descending order

---

## License

This project is open source and available for educational and personal use.

---

## Author

Implemented by Shoaib – Advanced C++ Calculator for beginners to intermediate learners.
