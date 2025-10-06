// Learning about variables and data types in C++
#include <iostream>
using namespace std;

int main() {
    // Variables are like boxes that store different types of data
    
    // 'int' stores whole numbers (integers)
    int age = 25;
    int score = 100;
    
    // 'double' stores numbers with decimal points
    double price = 19.99;
    double temperature = 36.5;
    
    // 'char' stores a single character (letter, number, or symbol)
    char grade = 'A';
    char symbol = '$';
    
    // 'string' stores text (multiple characters together)
    string name = "John";
    string message = "Welcome to C++!";
    
    // 'bool' stores true or false values
    bool isPassed = true;
    bool isRaining = false;
    
    // Now let's print all these variables to see their values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Score: " << score << " points" << endl;
    cout << "Price: $" << price << endl;
    cout << "Temperature: " << temperature << " degrees" << endl;
    cout << "Passed: " << isPassed << endl;
    cout << "Message: " << message << endl;
    
    return 0;
}