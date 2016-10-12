#include <iostream>
#include <string> 
using namespace std;


int main () { 
    string userResponse1;
    string userResponse2;
    string userResponse3;
    string userResponse4;
    int userResponse5;
    
    cout << "What color is your Aura?" << endl;
    cout << "Please type responses as yes or no." << endl << endl;
    cout << "Are you hungry right now?" << endl;
    cin >> userResponse1;
    
    if (userResponse1 == "yes") {
        cout << "Your aura is yellow." << endl;
    }
    else if (userResponse1 == "no") {
        cout << "Would you consider yourself a confident person?" << endl;
        cin >> userResponse2;
            if (userResponse2 == "yes") {
                cout << "Your aura is blue." << endl;
            }
            else if (userResponse2 == "no") {
                cout << "Do you often feel angry?" << endl;
                cin >> userResponse3;
                    if (userResponse3 == "yes") {
                        cout << "Your aura is red." << endl;
                    }
                    else if (userResponse3 == "no") {
                        cout << "Do you need romance in your life?" << endl;
                        cin >> userResponse4;
                            if (userResponse4 == "yes") {
                                cout << "Your aura is red." << endl;
                            }
                            else if (userResponse4 == "no") {
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
                            else {
                                cout << "Invalid Response." << endl;
                            }    
                    }
                    else {
                        cout << "Invalid Response." << endl;
                    }
            }
            else {
                cout << "Invalid Response." << endl;
            }
            
            
        
    
    }
    else {
        cout << "Invalid Response." << endl;
    }
    

}



    
        
    
   
    

        
    
    
    
    
    
    
    
