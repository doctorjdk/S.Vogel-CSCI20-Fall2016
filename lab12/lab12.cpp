#include <iostream>
#include <string> 
using namespace std;


void Hungry (char response) {
    if (response == 'y') {
        cout << "Your aura is yellow." << endl;
    }
    else {
        cout << endl;
    }
}

void Confident (string response) {
    if (response == "yes") {
        cout << "Your aura is orange." << endl;
    }
    else {
        cout << endl;
    }
}
 
void Anger (string response1, string response2) {
    if (response1 == "yes") {
        cout << "Your aura is red." << endl;
        }
    else if (response1 == "no") {
            if (response2 == "yes") {
                cout << "Your aura is red." << endl;
            }
            else {
                cout << "Your aura is purple." << endl;
            }
        }
}



int main () {
    
    
    char userResponse1;
    string userResponse2;
    string userResponse3;
    string userResponse4;
    int userResponse5;
    
    cout << "What color is your Aura?" << endl;
    cout << "Please type responses as yes or no." << endl << endl;
    cout << "Are you hungry right now?" << endl;
    cin >> userResponse1;
    Hungry(userResponse1);
    switch (userResponse1) {
        case 'y':
            break;
    }
     
    
    cout << "Do you consider yourself a confident person?" << endl;
    cin >> userResponse2;
    Confident(userResponse2);
    
    
    cout << "Do you often feel angry?" << endl;
    cin >> userResponse3;
    cout << endl;
    cout << "Do you need romance in your life?" << endl;
    cin >> userResponse4;
    Anger (userResponse3, userResponse4);
    
    cout << "Using a scale of 0-10, how healthy would you consider yourself?" << endl;
    cin >> userResponse5;
        switch (userResponse5) {
            case 0:
                cout << "Your aura is dead.";
                break;
            case 1:
            case 2:
            case 3:
            case 4:
                cout << "Your aura is black.";
                break;
            case 5:
            case 6:
            case 7:
                cout << "Your aura is a vibrant beige.";
                break;
            case 8:
            case 9:
            case 10:
                cout << "Your aura is green.";
                break;
        }
        
    
   
    

        
    
    
    
    
    
    
    
}