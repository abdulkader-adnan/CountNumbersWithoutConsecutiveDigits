# Counting Numbers Without Consecutive Digits

[cite_start]This repository contains the C++ implementation and research paper for "Counting Numbers Without Consecutive Digits: using Brute Force and Dynamic Programming"[cite: 1].

[cite_start]The project provides a comprehensive analysis and head-to-head comparison of two algorithms for solving a specific combinatorial problem: counting all non-negative numbers up to a given integer $N$ that do not have consecutive digits[cite: 19, 28].

---

## 📝 Problem Definition

Given a positive integer `N`, the goal is to count all numbers $x$ in the range $[0, N]$ such that no two adjacent digits in $x$ are consecutive.

* **Examples of Valid Numbers:** `5`, `10`, `13`, `54`, `979`
* **Examples of Invalid Numbers:** `12` (1 and 2 are consecutive), `110`, `567` (5 and 6, 6 and 7), `98`

[cite_start]**Note:** The definition of "consecutive" used in the code and paper is that the *absolute difference* between adjacent digits is 1[cite: 80, 123].

---

## 💡 Approaches Compared

[cite_start]This project implements and analyzes two vastly different methods[cite: 19]:

### 1. Brute Force
[cite_start]A straightforward approach that iterates through every number from 0 to $N$[cite: 73]. [cite_start]For each number, it performs a check to see if it contains any consecutive digits[cite: 73, 91].

* [cite_start]**Time Complexity:** $O(N \log N)$ [cite: 19, 100]
* [cite_start]**Space Complexity:** $O(1)$ [cite: 100]

### 2. Digit Dynamic Programming (DP)
[cite_start]A highly efficient method that builds the numbers digit by digit, from left to right[cite: 54, 120]. [cite_start]It uses memoization to store the results of subproblems, avoiding redundant calculations[cite: 68, 125].

[cite_start]The DP state is defined by four key parameters[cite: 107, 108]:
1.  [cite_start]`pos`: The current digit position being filled[cite: 110].
2.  [cite_start]`prev`: The previous digit placed[cite: 110].
3.  [cite_start]`tight`: A boolean flag to track if the number being built is still constrained by the digits of $N$[cite: 110, 117].
4.  [cite_start]`leading`: A boolean flag to handle leading zeros[cite: 111, 117].

* [cite_start]**Time Complexity:** $O(\log N)$ [cite: 19, 139] (Specifically, $O(\log_{10}N)$ or proportional to the number of digits in $N$)
* [cite_start]**Space Complexity:** $O(\log N)$ [cite: 160]

---

## 📊 Performance & Results

The experimental results clearly show the exponential speedup achieved by the Dynamic Programming approach. [cite_start]The DP solution can handle inputs as large as $10^{100}$ in milliseconds, while the Brute Force method becomes computationally intractable (times out) for inputs as small as $10^7$ or $10^9$[cite: 20, 138, 159].

| N | Brute Force (ms) | DP (ms) | Count |
| :--- | :--- | :--- | :--- |
| $10^3$ | 0.42 | 0.02 | 784 |
| $10^6$ | 412.7 | 0.05 | 790,585 |
| $10^9$ | (timeout) | 0.11 | 791,629,524 |
| $10^{18}$ | (timeout) | 0.38 | 8,129,394,333,756,324 |
| $10^{100}$ | (timeout) | 1.25 | $\approx 9.34 \times 10^{99}$ |

[cite_start]*(Results reproduced from Table II [cite: 132])*

![Performance Graph](https://i.imgur.com/8Q9tG8Y.png)
[cite_start]*(Image from Fig. 1 in the paper, showing a log-log plot of execution time vs. input size [cite: 155])*

---

## 🚀 How to Run the Code

The file `CountNumbersWithoutConsecutiveDigits.cpp` contains the implementations for both algorithms.

### 1. Compile
You can compile the file using a C++ compiler like `g++`:
```bash
g++ CountNumbersWithoutConsecutiveDigits.cpp -o count_numbers -std=c++11

### 1. Run
./count_numbers

### 3. Input
The program will prompt you to enter a value for N. It will then output the counts calculated by both the DP and Brute Force methods.
Enter N: 100
Count with Dynamic Programming approach: 91
Count with Brute Force approach: 91

Here is a description formatted in Markdown (the "code" used to style README files on GitHub). You can copy and paste this directly into a new file named README.md in your repository.

Markdown

# Counting Numbers Without Consecutive Digits

[cite_start]This repository contains the C++ implementation and research paper for "Counting Numbers Without Consecutive Digits: using Brute Force and Dynamic Programming"[cite: 1].

[cite_start]The project provides a comprehensive analysis and head-to-head comparison of two algorithms for solving a specific combinatorial problem: counting all non-negative numbers up to a given integer $N$ that do not have consecutive digits[cite: 19, 28].

---

## 📝 Problem Definition

Given a positive integer `N`, the goal is to count all numbers $x$ in the range $[0, N]$ such that no two adjacent digits in $x$ are consecutive.

* **Examples of Valid Numbers:** `5`, `10`, `13`, `54`, `979`
* **Examples of Invalid Numbers:** `12` (1 and 2 are consecutive), `110`, `567` (5 and 6, 6 and 7), `98`

[cite_start]**Note:** The definition of "consecutive" used in the code and paper is that the *absolute difference* between adjacent digits is 1[cite: 80, 123].

---

## 💡 Approaches Compared

[cite_start]This project implements and analyzes two vastly different methods[cite: 19]:

### 1. Brute Force
[cite_start]A straightforward approach that iterates through every number from 0 to $N$[cite: 73]. [cite_start]For each number, it performs a check to see if it contains any consecutive digits[cite: 73, 91].

* [cite_start]**Time Complexity:** $O(N \log N)$ [cite: 19, 100]
* [cite_start]**Space Complexity:** $O(1)$ [cite: 100]

### 2. Digit Dynamic Programming (DP)
[cite_start]A highly efficient method that builds the numbers digit by digit, from left to right[cite: 54, 120]. [cite_start]It uses memoization to store the results of subproblems, avoiding redundant calculations[cite: 68, 125].

[cite_start]The DP state is defined by four key parameters[cite: 107, 108]:
1.  [cite_start]`pos`: The current digit position being filled[cite: 110].
2.  [cite_start]`prev`: The previous digit placed[cite: 110].
3.  [cite_start]`tight`: A boolean flag to track if the number being built is still constrained by the digits of $N$[cite: 110, 117].
4.  [cite_start]`leading`: A boolean flag to handle leading zeros[cite: 111, 117].

* [cite_start]**Time Complexity:** $O(\log N)$ [cite: 19, 139] (Specifically, $O(\log_{10}N)$ or proportional to the number of digits in $N$)
* [cite_start]**Space Complexity:** $O(\log N)$ [cite: 160]

---

## 📊 Performance & Results

The experimental results clearly show the exponential speedup achieved by the Dynamic Programming approach. [cite_start]The DP solution can handle inputs as large as $10^{100}$ in milliseconds, while the Brute Force method becomes computationally intractable (times out) for inputs as small as $10^7$ or $10^9$[cite: 20, 138, 159].

| N | Brute Force (ms) | DP (ms) | Count |
| :--- | :--- | :--- | :--- |
| $10^3$ | 0.42 | 0.02 | 784 |
| $10^6$ | 412.7 | 0.05 | 790,585 |
| $10^9$ | (timeout) | 0.11 | 791,629,524 |
| $10^{18}$ | (timeout) | 0.38 | 8,129,394,333,756,324 |
| $10^{100}$ | (timeout) | 1.25 | $\approx 9.34 \times 10^{99}$ |

[cite_start]*(Results reproduced from Table II [cite: 132])*

![Performance Graph](https://i.imgur.com/8Q9tG8Y.png)
[cite_start]*(Image from Fig. 1 in the paper, showing a log-log plot of execution time vs. input size [cite: 155])*

---

## 🚀 How to Run the Code

The file `CountNumbersWithoutConsecutiveDigits.cpp` contains the implementations for both algorithms.

### 1. Compile
You can compile the file using a C++ compiler like `g++`:
```bash
g++ CountNumbersWithoutConsecutiveDigits.cpp -o count_numbers -std=c++11
2. Run
Execute the compiled program:

Bash

./count_numbers
3. Input
The program will prompt you to enter a value for N. It will then output the counts calculated by both the DP and Brute Force methods.

Enter N: 100
Count with Dynamic Programming approach: 91
Count with Brute Force approach: 91
📄 Research Paper
For a detailed mathematical analysis, recurrence relations, and discussion of applications (such as in password policies and error detection ), please see the full paper included in this repository.


CountNumbersWithoutConsecutiveDigits.pdf

🧑‍💻 Authors
Abdulkader Adnan Ibrahim 

Karem Gamal 

Ali Mohamed 

Marwan Ayman 

Omar Ali Eissa 


Faculty of Computer Science, Misr International University, Cairo, Egypt
