#include <iostream>
using namespace std;


void TimeBetween (int hour1, int minutes1, int hour2, int minutes2) {
    int minutesDefault = 0;
    
    while (hour1 < hour2) {
        while (minutes1 <= 59) {
            if (minutes1 <= 9) {
                cout << hour1 << ":0" << minutes1 << endl;
            }
            else {
                cout << hour1 << ":" << minutes1 << endl;
            }
            ++minutes1;
            
        }
    minutes1 = 0;
    ++hour1;
    }

    while (hour1 == hour2) {
        while (minutesDefault <= minutes2) {
            if (minutesDefault <= 9) {
                cout << hour2 << ":0" << minutesDefault << endl;
            }
            else {
                cout << hour2 << ":" << minutesDefault << endl;
            }
        ++minutesDefault;
        }
    }
} 

//USER INPUT

void UserTime(int hour1, int hour2) {
    int minutesDefault = 0;    

    if (hour1 >= hour2) {
        while (hour1 <= 12) {
         while (minutesDefault <= 59) {
            if (minutesDefault <=9) {
                cout << hour1 << ":0" << minutesDefault << endl;
            }
            else {
                cout << hour1 << ":" << minutesDefault << endl;
            }
        minutesDefault = minutesDefault + 15;
        }
    minutesDefault = 0;
    ++hour1;
    }
    hour1 = 1;
}
   
   while (hour1 <= hour2) {
        while (minutesDefault <= 59) {
            if (minutesDefault <=9) {
                cout << hour1 << ":0" << minutesDefault << endl;
            }
            else {
                cout << hour1 << ":" << minutesDefault << endl;
            }
        minutesDefault = minutesDefault + 15;     
        }
    minutesDefault = 0;
    ++hour1;
    }
    
}


int main () {
    int userHour1 = 0;
    int userHour2 = 0;
    
    //TimeBetween(1,0,2,59);
    
    cout << "Please enter a starting hour: ";
    cin >> userHour1;
    cout << "Please enter an ending hour: ";
    cin >> userHour2;
    
    UserTime(userHour1, userHour2);
    
    
    
    
}

    
    
    
    
