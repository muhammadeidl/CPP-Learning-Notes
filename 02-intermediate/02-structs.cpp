// Learning about structures - grouping related data together
#include <iostream>
#include <string>
using namespace std;

// A struct is like a template for creating objects with multiple properties
struct Student {
    string name;      // Student's name
    int age;          // Student's age
    double grade;     // Student's grade
    bool isPassed;    // Did the student pass?
};

// Another struct for a different type of object
struct Book {
    string title;     // Book title
    string author;    // Who wrote it
    int pages;        // How many pages
    double price;     // How much it costs
};

int main() {
    cout << "=== CREATING STUDENTS ===" << endl;
    
    // Create individual student objects
    Student student1;  // Create an empty student
    student1.name = "Alice";      // Fill in the name
    student1.age = 20;            // Fill in the age
    student1.grade = 85.5;        // Fill in the grade
    student1.isPassed = true;     // Fill in pass status
    
    // Create another student with all values at once
    Student student2 = {"Bob", 19, 92.0, true};
    
    // Create a third student
    Student student3 = {"Charlie", 21, 67.5, false};
    
    // Display student information
    cout << "=== STUDENT INFORMATION ===" << endl;
    cout << "Student 1:" << endl;
    cout << "  Name: " << student1.name << endl;
    cout << "  Age: " << student1.age << " years old" << endl;
    cout << "  Grade: " << student1.grade << "%" << endl;
    cout << "  Passed: " << (student1.isPassed ? "Yes" : "No") << endl;
    
    cout << "\nStudent 2:" << endl;
    cout << "  Name: " << student2.name << endl;
    cout << "  Age: " << student2.age << " years old" << endl;
    cout << "  Grade: " << student2.grade << "%" << endl;
    cout << "  Passed: " << (student2.isPassed ? "Yes" : "No") << endl;
    
    cout << "\nStudent 3:" << endl;
    cout << "  Name: " << student3.name << endl;
    cout << "  Age: " << student3.age << " years old" << endl;
    cout << "  Grade: " << student3.grade << "%" << endl;
    cout << "  Passed: " << (student3.isPassed ? "Yes" : "No") << endl;
    
    cout << "\n=== WORKING WITH BOOKS ===" << endl;
    
    // Create some books
    Book book1 = {"Harry Potter", "J.K. Rowling", 320, 12.99};
    Book book2 = {"The Hobbit", "J.R.R. Tolkien", 276, 14.50};
    
    cout << "Library Books:" << endl;
    cout << "Book 1: \"" << book1.title << "\" by " << book1.author << endl;
    cout << "        " << book1.pages << " pages, $" << book1.price << endl;
    
    cout << "Book 2: \"" << book2.title << "\" by " << book2.author << endl;
    cout << "        " << book2.pages << " pages, $" << book2.price << endl;
    
    cout << "\n=== ARRAY OF STUDENTS ===" << endl;
    // We can also create arrays of structs!
    Student classroom[3] = {student1, student2, student3};
    
    cout << "Class Summary:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student " << (i + 1) << ": " << classroom[i].name 
             << " (Grade: " << classroom[i].grade << "%)" << endl;
    }
    
    // Calculate average grade
    double totalGrades = 0;
    for (int i = 0; i < 3; i++) {
        totalGrades += classroom[i].grade;
    }
    double average = totalGrades / 3;
    cout << "Class average: " << average << "%" << endl;
    
    return 0;
}