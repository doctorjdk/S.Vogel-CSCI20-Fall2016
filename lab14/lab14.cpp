#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int years = 0;
    double balance = 0;
    double deposit = 0;
    double rate = 0;
    int thousands = 0;
    int i = 0;
    
    
    cout << "What is your initial balance: ";
    cin >> balance;
    cout << "How many years would you like to simulate: ";
    cin >> years;
    
    for (i = 1; i <= years; ++i) {
        if (i > 1) {
        cout << "Deposits for year " << i - 1 <<": ";
        cin >> deposit;
        }
        
        balance = balance + deposit;
        thousands = balance / 1000;
        rate = (3 + (.5 * thousands)) / 100;
        
        if (rate > 8.0) {
            rate = 8.0;
        }

        balance = pow((1 + rate/12), 12) * balance;
        
    }
    

    cout << "Final balance is: " << balance << " dollars." << endl;
    
    
}