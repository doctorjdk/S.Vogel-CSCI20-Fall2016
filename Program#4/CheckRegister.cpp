#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

class Register {
    public:
        void GetFile();
        void GetArrays();
        void CalcTotals();
        void ExpenseReport();
    
    
    private:
        ifstream userFS;
        ofstream outFS;
        string userFile;
        string filestream;
        string type[100];
        string date[100];
        string merchant[100];
        string merch[100];
        double amount[100];
        double deposits = 0.0;
        double expenses = 0.0;
        double balance = 0.0;
        double merchBal = 0.0;
        int temp = 0;
        int i = 0;
        int j = 0;
        
};
//OPEN FILE FUNCTION
void Register::GetFile() {
    cout << "Choose a file to read: ";
    cin >> userFile;
    cout << "Opening file..." << endl;
    userFS.open(userFile);
    //userFS.open("register.txt");
    
    if (!userFS.is_open()) {
        cout << "Could not open file.";
    }
    
    cout << "Opening new write-to file... " << endl << endl;
    outFS.open("newregister.txt");
    
    if(!outFS.is_open()) {
        cout << "Could not open new write-to file." << endl << endl;
    }
}
//CREATE ARRAYS FUNCTION
void Register::GetArrays() {
    GetFile();
    
    while (userFS.good()) {
        getline(userFS, type[i], ':');
        getline(userFS, date[i], ':');
        getline(userFS, merchant[i], ':');
        userFS >> amount[i];
        
        outFS << setw(13) << left << type[i];
        outFS << setw(8) << left << date[i];
        outFS << setw(15) << left << merchant[i];
        outFS << setw(10) << left << amount[i];
        
        cout << setw(13) << left << type[i];
        cout << setw(8) << left << date[i];
        cout << setw(15) << left << merchant[i];
        cout << setw(10) << left << amount[i];
        
        ++i;
    }
    outFS << endl << endl;
    cout << endl << endl;
}
//CALC BALANCE FUNCTION
void Register::CalcTotals() {
    GetArrays();
    
    temp = i;
    for (i = 0; i <= temp; ++i) {
        if (merchant[i] == "-") {
            deposits = deposits + amount[i];
        }
        else if (merchant[i] != "-") {
            expenses = expenses + amount[i];
        }
    }
    
    balance = deposits - expenses;
    
    cout << setw(20) << left << "Total Deposits: " << "$" << deposits << endl;
    cout << setw(20) << left << "Total Deductions:" << "$" << expenses << endl;
    cout << setw(20) << left << "Balance:" << "$" << balance << endl << endl;
    
    outFS << setw(20) << left << "Total Deposits: " << "$" << deposits << endl;
    outFS << setw(20) << left << "Total Deductions:" << "$" << expenses << endl;
    outFS << setw(20) << left << "Balance:" << "$" << balance << endl << endl;
}
//EXPENSE REPORT FUNTION
void Register::ExpenseReport() {
    CalcTotals();
    
    temp = i;
    i = 0;
    j = 0;
    
    cout << "Merchant Total Deductions: " << endl;
    outFS << "Merchant Total Deductions: " << endl;
    for (i = 0; i < temp; ++i) {
        for (j = i+1; j < temp; ++j) {
            if (merchant[i] == merchant[j] && merchant[i] != "-") {
                deposits = amount[i] + amount[j];
                merch[j] = merchant[i];
                merch[i] = merchant[j];
                cout << setfill('-');
                cout << setw(15) << left << merchant[i] << "$" << deposits << endl;
                outFS << setfill('-');
                outFS << setw(15) << left << merchant[i] << "$" << deposits << endl;
            }
        }
    }
    i = 0;
    while (i < temp) {
        if (merch[i] != merchant[i] && merch[j] != merchant[i] && merchant[i] != "-") {
            cout << setfill('-');
            cout << setw(15) << left << merchant[i] << "$" << amount[i] << endl;
            outFS << setfill('-');
            outFS << setw(15) << left << merchant[i] << "$" << amount[i] << endl;
        }
        ++i;
        ++j;
    }
}

int main () {
    Register user1;
    user1.ExpenseReport();
}