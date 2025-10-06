// Learning how to get input from the user
#include <iostream>
#include <string>  // We need this for string variables
using namespace std;

int main() {
    // Create variables to store user input
    string userName;
    int userAge;
    double userHeight;
    
    // Ask the user for their name
    cout << "What is your name? ";
    cin >> userName;  // 'cin' gets input from the user
    
    // Ask the user for their age
    cout << "How old are you? ";
    cin >> userAge;
    
    // Ask the user for their height
    cout << "What is your height in meters? ";
    cin >> userHeight;
    
    // Show the information back to the user
    cout << "\n--- Your Information ---" << endl;
    cout << "Name: " << userName << endl;
    cout << "Age: " << userAge << " years old" << endl;
    cout << "Height: " << userHeight << " meters" << endl;
    
    // Create a personalized message
    cout << "\nHello " << userName << "!" << endl;
    cout << "Nice to meet you!" << endl;
    
    return 0;
}