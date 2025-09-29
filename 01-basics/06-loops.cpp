// Learning about loops - doing the same thing multiple times
#include <iostream>
using namespace std;

int main() {
    cout << "=== FOR LOOPS ===" << endl;
    // For loop: repeat something a specific number of times
    cout << "Counting from 1 to 5:" << endl;
    
    // This loop starts at 1, continues while i <= 5, and adds 1 to i each time
    for (int i = 1; i <= 5; i++) {
        cout << "Number: " << i << endl;
    }
    
    cout << "\nCounting down from 5 to 1:" << endl;
    for (int i = 5; i >= 1; i--) {
        cout << "Number: " << i << endl;
    }
    
    cout << "\n=== WHILE LOOPS ===" << endl;
    // While loop: repeat while a condition is true
    int countdown = 3;
    cout << "Rocket launch countdown:" << endl;
    
    while (countdown > 0) {
        cout << countdown << "..." << endl;
        countdown--;  // This reduces countdown by 1 each time
    }
    cout << "Blast off! 🚀" << endl;
    
    cout << "\n=== PRACTICAL EXAMPLE ===" << endl;
    // Let's add up numbers from 1 to 10
    int sum = 0;  // Start with 0
    
    cout << "Adding numbers from 1 to 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;  // Add current number to our total
        cout << "Adding " << i << ", total so far: " << sum << endl;
    }
    
    cout << "Final sum: " << sum << endl;
    
    cout << "\n=== MULTIPLICATION TABLE ===" << endl;
    // Let's create a multiplication table for 5
    int number = 5;
    
    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        int result = number * i;
        cout << number << " x " << i << " = " << result << endl;
    }
    
    return 0;
}