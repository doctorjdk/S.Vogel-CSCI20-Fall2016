#include <iostream>
using namespace std;

void UserTime(int hour1, int hour2) {
    int minutes = 0;
    
    for (hour1; hour1 < hour2; ++hour1) {
        for (minutes = 0; minutes < 60; minutes = minutes + 15) {
            if (minutes < 10) {
                cout << hour1 << ":0" << minutes << endl;
            }
            else {
                cout << hour1 << ":" << minutes << endl;
            }
        }
    }
    for (hour1; hour1 > hour2; ++hour1) {
        for (hour1; hour1 < 13; ++hour1){
            for (hour1 = 1; hour1 < hour2; ++hour1) {
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
    }
    
    if (hour1 == hour2) {
        cout << hour2 << ":00" << endl;
    }
}
    
int main () {
    UserTime (9,6);
}