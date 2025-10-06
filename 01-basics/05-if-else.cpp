// Learning how to make decisions in your program
#include <iostream>
using namespace std;

int main() {
    // Let's check if someone can vote based on their age
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    
    // 'if' statement: do something only if a condition is true
    if (age >= 18) {
        cout << "You are old enough to vote!" << endl;
        cout << "Congratulations!" << endl;
    }
    // 'else' statement: do something different if the condition is false
    else {
        cout << "You are too young to vote." << endl;
        int yearsToWait = 18 - age;
        cout << "You need to wait " << yearsToWait << " more years." << endl;
    }
    
    // Let's check grades using multiple conditions
    int score;
    cout << "\nEnter your test score (0-100): ";
    cin >> score;
    
    // Using 'else if' for multiple conditions
    if (score >= 90) {
        cout << "Grade: A - Excellent work!" << endl;
    }
    else if (score >= 80) {
        cout << "Grade: B - Good job!" << endl;
    }
    else if (score >= 70) {
        cout << "Grade: C - You passed!" << endl;
    }
    else if (score >= 60) {
        cout << "Grade: D - You barely passed." << endl;
    }
    else {
        cout << "Grade: F - You failed. Study harder!" << endl;
    }
    
    // Simple true/false check
    bool isRaining = true;
    
    if (isRaining) {
        cout << "\nIt's raining! Take an umbrella." << endl;
    }
    else {
        cout << "\nIt's sunny! Perfect day for a walk." << endl;
    }
    
    return 0;
}