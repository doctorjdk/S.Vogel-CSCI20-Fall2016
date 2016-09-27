#include <iostream>
#include <string>
using namespace std;


struct Grades {
    
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;
    double totalPoints;
    double maxPoints;
    double gradePercent;
    
    
};

int main (){

    Grades Student1;
    
    cout << "Please enter your points for Assignment 1: ";
    cin >> Student1.grade1;
    cout << "Please enter your points for Assignment 2: ";
    cin >> Student1.grade2;
    cout << "Please enter your points for Assignment 3: ";
    cin >> Student1.grade3;
    cout << "Please enter your points for Assignment 4: ";
    cin >> Student1.grade4;
    cout << "Please enter your points for Assignment 5: ";
    cin >> Student1.grade5;
    
    cout << endl << endl << endl;
    
    Student1.maxPoints = 175;
    Student1.totalPoints = Student1.grade1+Student1.grade2+Student1.grade3+Student1.grade4+Student1.grade5;
    Student1.gradePercent = (Student1.totalPoints/Student1.maxPoints) * 100;
    
    cout << "You scored ";
    cout << Student1.totalPoints;
    cout << " points out of a maximum of 175." << endl;
    cout << "You have a grade percentage of: ";
    cout << Student1.gradePercent;

    
}