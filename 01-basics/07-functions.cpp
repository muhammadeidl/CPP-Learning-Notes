// Learning about functions - reusable pieces of code
#include <iostream>
using namespace std;

// This function says hello to someone
// 'void' means it doesn't return any value
void sayHello(string name) {
    cout << "Hello, " << name << "! Nice to meet you!" << endl;
}

// This function adds two numbers and returns the result
// 'int' means it returns a whole number
int addNumbers(int a, int b) {
    int result = a + b;
    return result;  // Send the result back to whoever called this function
}

// This function checks if a number is even or odd
bool isEven(int number) {
    // If the remainder when divided by 2 is 0, the number is even
    if (number % 2 == 0) {
        return true;   // Yes, it's even
    }
    else {
        return false;  // No, it's odd
    }
}

// This function calculates the area of a rectangle
double calculateArea(double length, double width) {
    double area = length * width;
    return area;
}

// The main function - this is where our program starts
int main() {
    cout << "=== USING FUNCTIONS ===" << endl;
    
    // Call the sayHello function
    sayHello("Alice");
    sayHello("Bob");
    
    cout << "\n=== ADDING NUMBERS ===" << endl;
    // Call the addNumbers function and store the result
    int sum = addNumbers(15, 25);
    cout << "15 + 25 = " << sum << endl;
    
    // We can also use the function directly in cout
    cout << "10 + 30 = " << addNumbers(10, 30) << endl;
    
    cout << "\n=== CHECKING EVEN/ODD ===" << endl;
    // Check if numbers are even or odd
    int testNumber = 8;
    if (isEven(testNumber)) {
        cout << testNumber << " is even" << endl;
    }
    else {
        cout << testNumber << " is odd" << endl;
    }
    
    testNumber = 7;
    if (isEven(testNumber)) {
        cout << testNumber << " is even" << endl;
    }
    else {
        cout << testNumber << " is odd" << endl;
    }
    
    cout << "\n=== CALCULATING AREA ===" << endl;
    // Calculate area of different rectangles
    double area1 = calculateArea(5.0, 3.0);
    double area2 = calculateArea(10.5, 2.5);
    
    cout << "Rectangle 1 (5.0 x 3.0): " << area1 << " square units" << endl;
    cout << "Rectangle 2 (10.5 x 2.5): " << area2 << " square units" << endl;
    
    return 0;
}