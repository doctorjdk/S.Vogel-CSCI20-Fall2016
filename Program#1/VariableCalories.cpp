#include <iostream>
#include <string>
using namespace std;

    
    int calPerDay = 2000;
    int daysPerYear = 365;
    int avgCalPerYear = (calPerDay * daysPerYear); 
    int userAge;
    string userName;

    
    int main (){
    
    
    cout << "Please enter your full name: ";
    getline (cin, userName);
    cout << "Please enter your age: ";
    cin >> userAge;
    cout << endl << endl << endl;
    
    cout << "Name: " << userName << endl;
    cout << "Age: ";
    cout << userAge << endl;
    cout << "Average calories per year: ";
    cout << avgCalPerYear << endl;
    
    int lifetimeCals = (avgCalPerYear * userAge);
    
    cout << "Average calories expended in your lifetime is: ";
    cout << lifetimeCals << endl;
    
    int numCookies = lifetimeCals/200;
    
    cout << "If every calorie you have ever eaten came from cookies, you would have consumed ";
    cout << numCookies << " cookies!" << endl;
    
    
    
    
    
}