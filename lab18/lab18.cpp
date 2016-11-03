#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Names {
    public:
        void GetName();
        void ChangeName();
        
    private:
        string firstName;
        string lastName;
        int i = 0;
        int j = 0;
};

void Names::GetName() {
    cout << "Enter first name: ";
    cin >> firstName;
    
    if (firstName.size() > 10) {
        cout << "Too many characters.  Please enter name with ten characters or less." << endl;
        return;
    }
    
    cout << "Enter last name: ";
    cin >> lastName;
    
    if (lastName.size() > 20) {
        cout << "Too many characters.  Please enter name with twenty characters or less." << endl;
        return;
    }
    
    if (firstName == lastName) {
        cout << "Your last name is the same as your first???" << endl;
        return;
    }
    
    if (firstName.size() <= 10 && lastName.size() <= 20) {
        ChangeName();
    }
}

void Names::ChangeName() {
    string name1;
    string name2;
    string name3;
    string name4;
    string name5;

    cout << endl;
    cout << "Name: " << firstName << " " << lastName << endl << endl;
    
    for (i = 0; firstName[i] != '\0'; ++i) {
        firstName[i] = tolower(firstName[i]);
    }
    for (j = 0; lastName[j] != '\0'; ++j) {
        lastName[j] = tolower(lastName[j]);
    }
    
    name1 = firstName.at(0) + lastName;
    name2 = firstName.substr(0,3) + lastName;
    name3 = firstName.at(0);
    name4 = lastName.substr(0,5);
    name5 = firstName.at(0) + lastName.substr(0,3);
    
    
    cout << "Possible Usernames: " << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << "_dawg" << endl;
    cout << "lil_" << name4 << endl;
    cout << "noobhunter_" << name5 << endl;
    cout << "homespyce_grrl_" << name5 << endl;

    
}

int main () {
    Names user1;
    user1.GetName();
}