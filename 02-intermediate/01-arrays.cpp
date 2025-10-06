// Learning about arrays - storing multiple values in one container
#include <iostream>
using namespace std;

int main() {
    cout << "=== ARRAYS BASICS ===" << endl;
    
    // An array is like a row of boxes, each box can hold one value
    // Here we create an array that can hold 5 whole numbers
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Array positions start counting from 0 (not 1!)
    // Position: 0   1   2   3   4
    // Values:  10  20  30  40  50
    
    cout << "Our array contains these numbers:" << endl;
    cout << "Position 0: " << numbers[0] << endl;  // First item
    cout << "Position 1: " << numbers[1] << endl;  // Second item  
    cout << "Position 2: " << numbers[2] << endl;  // Third item
    cout << "Position 3: " << numbers[3] << endl;  // Fourth item
    cout << "Position 4: " << numbers[4] << endl;  // Fifth item
    
    cout << "\n=== USING LOOPS WITH ARRAYS ===" << endl;
    // Instead of writing each position separately, we can use a loop
    cout << "Printing all numbers using a loop:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Position " << i << ": " << numbers[i] << endl;
    }
    
    cout << "\n=== CHANGING ARRAY VALUES ===" << endl;
    // We can change values in the array
    numbers[2] = 99;  // Change the third number from 30 to 99
    cout << "Changed position 2 to 99" << endl;
    cout << "Position 2 is now: " << numbers[2] << endl;
    
    cout << "\n=== ARRAY OF NAMES ===" << endl;
    // Arrays can also hold text (strings)
    string friends[4] = {"Alice", "Bob", "Charlie", "Diana"};
    
    cout << "My friends are:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << friends[i] << endl;  // i+1 to start counting from 1
    }
    
    cout << "\n=== FINDING THE BIGGEST NUMBER ===" << endl;
    int scores[6] = {85, 92, 78, 96, 88, 73};
    int highest = scores[0];  // Start by assuming the first number is the biggest
    
    cout << "Test scores: ";
    for (int i = 0; i < 6; i++) {
        cout << scores[i] << " ";
        // Check if this score is higher than our current highest
        if (scores[i] > highest) {
            highest = scores[i];  // Found a new highest score!
        }
    }
    
    cout << endl;
    cout << "The highest score is: " << highest << endl;
    
    return 0;
}