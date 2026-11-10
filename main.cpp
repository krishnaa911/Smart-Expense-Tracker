
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// Base class
class Expense {
public:
    string name;
    float amount;

    Expense(string n, float a) {
        name = n;
        amount = a;
    }

    virtual void display() {
        cout << name << " : Rs. " << amount << endl;
    }

    virtual bool isWant() {
        return false;
    }

    virtual ~Expense() {}
};

// Derived class for essential expenses
class Need : public Expense {
public:
    Need(string n, float a) : Expense(n, a) {}

    void display() override {
        cout << "[NEED] " << name << " : Rs. " << amount << endl;
    }
};

// Derived class for non-essential expenses
class Want : public Expense {
public:
    Want(string n, float a) : Expense(n, a) {}

    void display() override {
        cout << "[WANT] " << name << " : Rs. " << amount << endl;
    }

    bool isWant() override {
        return true;
    }
};

// Main expense tracker class
class ExpenseTracker {
    vector<Expense*> expenses;

public:
    void addExpense() {
        string name;
        float amount;
        int choice;

        cout << "\nEnter expense name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter amount: ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount!\n";
            return;
        }

        cout << "1. Need\n2. Want\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            expenses.push_back(new Need(name, amount));
        }
        else if (choice == 2) {
            expenses.push_back(new Want(name, amount));
        }
        else {
            cout << "Invalid choice!\n";
            return;
        }

        cout << "Expense added successfully!\n";
    }

    void showExpenses() {
        float total = 0;

        cout << "\n--- EXPENSE HISTORY ---\n";

        for (Expense* e : expenses) {
            e->display();
            total += e->amount;
        }

        cout << "\nTotal Expense: Rs. " << total << endl;
    }

    // UNIQUE FEATURE: Need vs Want Analysis
    void smartAlert() {
        float total = 0;
        float wants = 0;

        for (Expense* e : expenses) {
            total += e->amount;

            if (e->isWant()) {
                wants += e->amount;
            }
        }

        if (total == 0) {
            cout << "Add expenses first!\n";
            return;
        }

        float score = (wants / total) * 100;

        cout << "\n--- SMART SPENDING ANALYSIS ---\n";
        cout << "Total Spending: Rs. " << total << endl;
        cout << "Want Spending: Rs. " << wants << endl;
        cout << "Want Spending Score: " << score << "%\n";

        if (score > 40) {
            cout << "WARNING: You are spending too much on wants!\n";
            cout << "Try reducing unnecessary purchases.\n";
        }
        else {
            cout << "Good! Your spending is under control.\n";
        }
    }

    // Save expenses in a file
    void saveFile() {
        ofstream file("expenses.txt");

        for (Expense* e : expenses) {
            file << e->name << "," << e->amount << ","
                 << (e->isWant() ? "Want" : "Need") << endl;
        }

        file.close();
        cout << "Data saved successfully!\n";
    }

    ~ExpenseTracker() {
        for (Expense* e : expenses) {
            delete e;
        }
    }
};

int main() {
    ExpenseTracker tracker;
    int choice;

    do {
        cout << "\n===== SPENDWISE =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Smart Spending Alert\n";
        cout << "4. Save Expenses\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                tracker.addExpense();
                break;

            case 2:
                tracker.showExpenses();
                break;

            case 3:
                tracker.smartAlert();
                break;

            case 4:
                tracker.saveFile();
                break;

            case 0:
                cout << "Thank you for using SpendWise!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
