// Design a C++ program that manages student information using the concept of Encapsulation. The program should store and manage student details securely, allowing access to sensitive data only through proper methods.

// Requirements:

// Create a Student class with the following private data members:
// string name (Student's Name)
// int rollNumber (Roll Number)
// float marks (Marks out of 100)
// Implement public methods for:
// Setters: To assign values to the private data members.
// Getters: To safely access and display student information.
// A method to grade the student based on marks:
// A for marks ≥ 90
// B for marks ≥ 75 and < 90
// C for marks ≥ 60 and < 75
// D for marks ≥ 40 and < 60
// F for marks < 40
// Ensure that marks cannot be set beyond the valid range (0-100).
// Demonstrate the functionality by creating objects and displaying their details and grades.
#include <iostream>
#include <string>
using namespace std;

class Encapsulation {
private:
    float marks;
    string name;
    int roll;
    char grade;

public:
    // Parameterized Constructor
    Encapsulation(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Getter Method
    void getid() {
        cout << "Roll: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }

    // Setter Method
    void setid(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Grading Method
    char Grading() {
        if (marks > 90 && marks <= 100) {
            grade = 'A';
        } else if (marks <= 90 && marks > 75) {
            grade = 'B';
        } else if (marks <= 75 && marks > 60) {
            grade = 'C';
        } else if (marks <= 60 && marks > 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }
        return grade;
    }
};

int main() {
    // Using parameterized constructor
    Encapsulation e1(5, "Aniket", 80);
    e1.getid();
    cout << "Grade: " << e1.Grading() << endl;

    Encapsulation e2(7, "Raj", 95);
    e2.getid();
    cout << "Grade: " << e2.Grading() << endl;

    return 0;
}

