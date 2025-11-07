# 📘 Counting Numbers Without Consecutive Digits

This repository contains the **C++ implementation** and **research paper** for  
**"Counting Numbers Without Consecutive Digits: Using Brute Force and Dynamic Programming"**.

The project provides a **comprehensive analysis and comparison** of two algorithms for solving a specific combinatorial problem:  
counting all non-negative numbers up to a given integer **N** that do **not** have consecutive digits.

---

## 📝 Problem Definition

Given a positive integer `N`, the goal is to count all numbers `x` in the range `[0, N]`  
such that **no two adjacent digits** in `x` are consecutive.

**Examples of Valid Numbers:** `5`, `10`, `13`, `54`, `979`  
**Examples of Invalid Numbers:** `12` (1 and 2 are consecutive), `110`, `567`, `98`

> **Note:** “Consecutive” means the *absolute difference* between adjacent digits is `1`.

---

## 💡 Approaches Compared

This project implements and analyzes two distinct methods:

### 1️⃣ Brute Force
A simple method that iterates through every number from `0` to `N`.  
For each number, it checks whether it contains consecutive digits.

- **Time Complexity:** `O(N log N)`
- **Space Complexity:** `O(1)`

---

### 2️⃣ Digit Dynamic Programming (DP)
A much faster algorithm that builds numbers **digit by digit** from left to right.  
It uses **memoization** to store and reuse results of subproblems, reducing redundant computations.

**DP State Parameters:**
1. `pos` → Current digit position being filled  
2. `prev` → Previous digit placed  
3. `tight` → Boolean flag to check if the current prefix is still restricted by `N`  
4. `leading` → Boolean flag to handle leading zeros  

- **Time Complexity:** `O(log N)` (proportional to number of digits in `N`)
- **Space Complexity:** `O(log N)`

---

## 📊 Performance & Results

Experimental results show a massive performance improvement with the **DP approach**.  
While Brute Force times out for large values, DP can handle inputs as large as `10^100` in milliseconds.

| N | Brute Force (ms) | DP (ms) | Count |
|:---:|:---:|:---:|:---:|
| 10³ | 0.42 | 0.02 | 784 |
| 10⁶ | 412.7 | 0.05 | 790,585 |
| 10⁹ | (timeout) | 0.11 | 791,629,524 |
| 10¹⁸ | (timeout) | 0.38 | 8,129,394,333,756,324 |
| 10¹⁰⁰ | (timeout) | 1.25 | ≈ 9.34 × 10⁹⁹ |

---

## ⚙️ How to Run the Code

The file `CountNumbersWithoutConsecutiveDigits.cpp` contains the implementation of both algorithms.

### 1️⃣ Compile
Use a C++ compiler such as `g++`:
```bash
g++ CountNumbersWithoutConsecutiveDigits.cpp -o count_numbers -std=c++11
```

### 2️⃣ Run
Execute the compiled program:
```bash
./count_numbers
```

### 3️⃣ Input Example
The program will prompt you to enter a value for N, then display the counts for both methods.

Enter N: 100
Count with Dynamic Programming approach: 91
Count with Brute Force approach: 91
📄 Research Paper
For a detailed mathematical analysis, recurrence relations, and applications
(such as in password policies and error detection), see the full paper

CountNumbersWithoutConsecutiveDigits.pdf

### 👩‍💻 Authors

# Abdulkader Adnan Ibrahim

# Karem Gamal

# Ali Mohamed

# Marwan Ayman

# Omar Ali Eissa

## Faculty of Computer Science, Misr International University, Cairo, Egypt

