# 💳 Credit Card Validator

A simple C program that validates credit card numbers using Luhn’s Algorithm.  
This project was built as part of my fundamentals exploration in C programming and problem solving.

## 📌 What It Does

This program:
- Accepts a credit card number as input
- Validates the number using Luhn's algorithm
- Determines the credit card type: `VISA`, `MASTERCARD`, `AMEX`, or `INVALID`

## ⚙️ How It Works

The logic follows these steps:
1. Multiply every other digit by 2, starting from the second-to-last digit
2. Add those digits together
3. Add the sum of the digits that weren't multiplied
4. If the total modulo 10 equals 0, the card is valid
5. Based on length and starting digits, the card type is determined

## 🛠️ Technologies Used

- C Language
- GCC Compiler

## 🚀 Run It Locally

```bash
git clone https://github.com/code-surya/credit-problem.git
cd credit-problem
make credit
./credit
