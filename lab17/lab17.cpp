#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Names {
    public:
        void GetName();
        void ChangeName();
        
    private:
        char firstName[11];
        char lastName[21];
        int i = 0;
        int j = 0;
};


void Names::GetName() {
    cout << "Please enter your first name: ";
    cin >> firstName;
    for (i = 0; firstName[i] != '\0'; ++i) {}
    if (i > 9) {
        cout << "Too many characters. Please enter ten characters or less." << endl;
        return;
    }
    
    cout << "Please enter your last name: ";
    cin >> lastName;
    for (j = 0; lastName[j] != '\0'; ++j) {}
    if (j > 19) {
        cout << "Too many characters. Please enter ten characters or less." << endl;
        return;
    }
    
    if (lastName[i] == firstName[j]) {
        cout << "Warning: last name same as first???" << endl;
        return;
    }
    
    if (i < 9 && j < 19) {
        ChangeName();
    }
}


void Names::ChangeName() {
    
    char name1[2] = "1";
    char name2[4] = "123";
    char name3[7] = "123456";
    
    cout << endl;
    cout << "Name: " << firstName << " " << lastName << endl << endl;
    cout << "Possible user names: " << endl;
    
    for (i = 0; firstName[i] != '\0'; ++i) {
        firstName[i] = tolower(firstName[i]);
    }
    for (j = 0; lastName[j] != '\0'; ++j) {
        lastName[j] = tolower(lastName[j]);
    }
    
    strncpy(name1, firstName, 1);
    cout << name1 << lastName << endl;
    cout << name1 << "_dog" << endl;
    
    strncpy(name2, firstName, 3);
    cout << name2 << lastName << endl;
    
    strncpy(name3, lastName, 6);
    cout << "lil" << name3 << endl;
    
    return;
}


int main () {
    
    Names user1;
    user1.GetName();
 
}

