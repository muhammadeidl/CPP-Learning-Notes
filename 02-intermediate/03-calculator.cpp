// A simple calculator program that combines many C++ concepts
#include <iostream>
using namespace std;

// Function to show the calculator menu
void showMenu() {
    cout << "\n=== SIMPLE CALCULATOR ===" << endl;
    cout << "Choose an operation:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice (1-5): ";
}

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    // Check if we're trying to divide by zero (which is not allowed!)
    if (b == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    cout << "Welcome to the Simple Calculator!" << endl;
    cout << "This calculator can do basic math operations." << endl;
    
    int choice;      // User's menu choice
    double num1, num2;  // The two numbers for calculations
    double result;   // The answer
    bool keepRunning = true;  // Control whether to continue or exit
    
    // Keep showing the calculator until user wants to exit
    while (keepRunning) {
        showMenu();
        cin >> choice;
        
        // Check what the user wants to do
        if (choice >= 1 && choice <= 4) {
            // Get two numbers from the user
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            
            // Perform the calculation based on user's choice
            if (choice == 1) {
                result = add(num1, num2);
                cout << num1 << " + " << num2 << " = " << result << endl;
            }
            else if (choice == 2) {
                result = subtract(num1, num2);
                cout << num1 << " - " << num2 << " = " << result << endl;
            }
            else if (choice == 3) {
                result = multiply(num1, num2);
                cout << num1 << " * " << num2 << " = " << result << endl;
            }
            else if (choice == 4) {
                result = divide(num1, num2);
                if (num2 != 0) {  // Only show result if division was successful
                    cout << num1 << " / " << num2 << " = " << result << endl;
                }
            }
        }
        else if (choice == 5) {
            cout << "Thank you for using the calculator! Goodbye!" << endl;
            keepRunning = false;  // Exit the loop
        }
        else {
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }
        
        // Add some space for better readability
        cout << endl;
    }
    
    return 0;
}