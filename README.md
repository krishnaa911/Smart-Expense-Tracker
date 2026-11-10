
# 💰 SpendWise – Smart Personal Expense Tracker

## 📌 About the Project

SpendWise is a simple C++ console-based Personal Expense Tracker developed using Object-Oriented Programming (OOPS) concepts.

It helps users record daily expenses, categorize spending into Needs and Wants, calculate total expenditure, and analyze spending habits.

The main aim of this project is to encourage better financial management and reduce unnecessary spending.

## ✨ Features

- Add new expenses.
- Categorize expenses into Needs and Wants.
- View complete expense history.
- Calculate total expenses.
- Smart Spending Analysis.
- Identify unnecessary spending.
- Display spending alerts.
- Save expense records using file handling.

## 🚀 Unique Feature – Smart Spending Alert

SpendWise includes a unique **Need vs Want Spending Analysis** feature.

Users classify every expense as:

- **Need:** Essential expenses such as groceries, education, transportation and bills.
- **Want:** Non-essential expenses such as shopping, entertainment and dining out.

The application calculates a Want Spending Score using:

Want Spending Score = (Total Want Spending / Total Spending) × 100

If the score exceeds 40%, the application displays a warning suggesting that the user reduce unnecessary purchases.

### Example

| Category | Amount |
|---|---:|
| Total Spending | ₹5,000 |
| Need Spending | ₹3,000 |
| Want Spending | ₹2,000 |
| Want Spending Score | 40% |

This helps users understand their spending patterns and make better financial decisions.

## 🛠️ Technologies Used

- Programming Language: C++
- Compiler: GCC / G++
- IDE: VS Code
- Concepts: Object-Oriented Programming
- Data Storage: File Handling
- Data Structure: Vector

## 📚 OOPS Concepts Implemented

| Concept | Implementation |
|---|---|
| Classes and Objects | Expense, Need, Want, ExpenseTracker |
| Encapsulation | Data management inside classes |
| Inheritance | Need and Want inherit from Expense |
| Polymorphism | Virtual functions and function overriding |
| Constructor | Initializes expense details |
| Destructor | Releases dynamically allocated memory |
| File Handling | Stores expenses in a text file |

## 📂 Project Structure

```text
Smart-Expense-Tracker/
│
├── main.cpp
├── expenses.txt
└── README.md
```

## 💻 How to Run the Project

### Step 1: Clone the repository

```bash
git clone https://github.com/krishnaa911/Smart-Expense-Tracker.git
```

### Step 2: Open the project folder

```bash
cd Smart-Expense-Tracker
```

### Step 3: Compile the C++ program

```bash
g++ -std=c++17 main.cpp -o SpendWise
```

### Step 4: Execute the program

For macOS / Linux:

```bash
./SpendWise
```

For Windows:

```bash
SpendWise.exe
```

## 🖥️ Application Menu

```text
========== SPENDWISE ==========

1. Add Expense
2. View Expenses
3. Smart Spending Alert
4. Save Expenses
0. Exit

Enter your choice:
```

## 🔮 Future Enhancements

- Monthly expense reports.
- Budget management.
- Graphical user interface.
- Database integration.
- Category-wise expense charts.
- Automatic expense recommendations.

## 🎯 Project Objective

The objective of SpendWise is to demonstrate the practical implementation of C++ OOPS concepts while developing a useful application for personal expense management.

## 👩‍💻 Developed As

OOPS (C++) Mini Project

**Project Name:** SpendWise – Smart Personal Expense Tracker

**Student Name:** Krishna Parmar

**UID:** 25BCD10155

**Language:** C++

---
