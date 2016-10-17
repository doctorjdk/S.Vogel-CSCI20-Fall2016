#include <iostream>
#include <string>
using namespace std;

int main () {
   
    int hourDefault = 0;
    int hour1 = 0;
    int hour2 = 0;
    int minutes = 0;
    
    
    cout << "Please enter start hour using military clock: ";
    cin >> hour1;

    
    cout << "Please enter end hour using military clock: ";
    cin >> hour2;

if (hour1 < hour2) {    
while (hour1 < hour2) {
        while (minutes <= 59) {
            if (minutes <= 9) {
                cout << hour1 << ":0" << minutes << endl;
            }
            else if (minutes <= 59) {
                cout << hour1 << ":" << minutes << endl;
            }
        minutes = minutes +15;
        }
   minutes = 0;
   ++hour1;
    }

    if (hour1 == hour2) {
        cout << hour2 << ":00" << endl;
    }
}

if (hour2 < hour1) {
    while (hour2 < hour1) {
        while (hour1 < 24) {
            while (minutes <= 59) {
                if (minutes <= 9) {
                cout << hour1 << ":0" << minutes << endl;
                }
                else if (minutes <= 59) {
                cout << hour1 << ":" << minutes << endl;
                }
            minutes = minutes +15;
            }
        minutes = 0;
        ++hour1; 
        }
    }
    if (hour2 == hour1) {
        cout << hour2 << ":" << endl;
    }
    if (hour2 )
}

    
}
    
    
    

