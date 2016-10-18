#include <iostream>
using namespace std;


void TimeBetween (int hour1, int minutes1, int hour2, int minutes2) {
    int minutesDefault = 0;
    
    if (hour1 >= hour2) {    
        for (hour1; hour1 < 13; ++hour1){
            for (minutesDefault = 0; minutesDefault < 60; minutesDefault = ++minutesDefault) {
                if (minutesDefault < 10) {
                    cout << hour1 << ":0" << minutesDefault << endl;
                }
                else {
                cout << hour1 << ":" << minutesDefault << endl;
                }
            }
        }
        hour1 = 1;
    }
    
    
    for (hour1; hour1 <= hour2; ++hour1) {
        for (minutesDefault = 0; minutesDefault < 60; minutesDefault = ++minutesDefault) {
            if (minutesDefault < 10) {
                cout << hour1 << ":0" << minutesDefault << endl;
            }
            else {
                cout << hour1 << ":" << minutesDefault << endl;
            }
        }
    }
}


//USER INPUT
void UserTime(int hour1, int hour2, int ampm1, int ampm2) {
    int minutes = 0;
    
    if (hour1 >= hour2) {
        for (hour1; hour1 < 13; ++hour1){
            for (minutes = 0; minutes < 60; minutes = minutes + 15) {
                if (minutes < 10) {
                    cout << hour1 << ":0" << minutes << endl;
                }
                else {
                    cout << hour1 << ":" << minutes << endl;
                }
            }
        }
        hour1 = 1;
    }
    
    
    for (hour1; hour1 <= hour2; ++hour1) {
        for (minutes = 0; minutes < 60; minutes = minutes + 15) {
            if (minutes < 10) {
                cout << hour1 << ":0" << minutes << endl;
            }
            else {
                cout << hour1 << ":" << minutes << endl;
            }
        }
    }
}
    
int main () {
    
    
    int userHour1;
    int userHour2;

    cout << "Please enter a starting hour: ";
    cin >> userHour1;
    cout << "Please enter an ending hour: ";
    cin >> userHour2;

    UserTime (userHour1, userHour2);
    
    //TimeBetween(1,0,2,59);
}