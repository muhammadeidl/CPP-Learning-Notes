// Learning basic math operations in C++
#include <iostream>
using namespace std;

int main() {
    // Let's work with two numbers
    int number1 = 20;
    int number2 = 5;
    
    cout << "First number: " << number1 << endl;
    cout << "Second number: " << number2 << endl;
    cout << "\n--- Math Operations ---" << endl;
    
    // Addition: adding numbers together
    int sum = number1 + number2;
    cout << number1 << " + " << number2 << " = " << sum << endl;
    
    // Subtraction: taking one number away from another
    int difference = number1 - number2;
    cout << number1 << " - " << number2 << " = " << difference << endl;
    
    // Multiplication: number1 times number2
    int product = number1 * number2;
    cout << number1 << " * " << number2 << " = " << product << endl;
    
    // Division: splitting number1 into number2 parts
    int quotient = number1 / number2;
    cout << number1 << " / " << number2 << " = " << quotient << endl;
    
    // Remainder: what's left over after division
    int remainder = number1 % number2;
    cout << number1 << " % " << number2 << " = " << remainder << " (remainder)" << endl;
    
    // We can also do math with decimal numbers
    double price1 = 15.75;
    double price2 = 8.25;
    double totalPrice = price1 + price2;
    
    cout << "\n--- Decimal Numbers ---" << endl;
    cout << "$" << price1 << " + $" << price2 << " = $" << totalPrice << endl;
    
    return 0;
}