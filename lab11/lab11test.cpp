#include <iostream>
#include <string>
using namespace std;


class IncomeTax {
    private:
    double taxesOwed;
    double S_D = 6100;
    double P_E = 3900;
    
    
    public:
    double TotIncome (double salary, double other, double interest);
    double TaxRateIndividual(double netIncome);
    double TaxRateCouple (double netIncome);
    
    double grossIncome;
    double netIncome;
    double salary;
    double other;
    double interest;
    double withheld;
    double netOwed;
    string userName;
    string maritalStatus;
};

double IncomeTax::TotIncome (double salary, double other, double interest) {
    grossIncome = salary + other + interest;
    return grossIncome;
}



double IncomeTax::TaxRateIndividual (double netIncome) {
        
        netIncome = grossIncome - P_E - S_D;    
    
    if (netIncome <= 0) {
        taxesOwed = 0;
        }
    else if (netIncome > 0 && netIncome < 8925.00) {
        taxesOwed = (netIncome * .10);
        }
    else if (netIncome > 8925 && netIncome< 36250) {
        taxesOwed = 892.5 + .15 * (netIncome - 8925);
        }
    else if (netIncome > 36250 && netIncome < 87850) {
        taxesOwed = 4991.25 + .25 * (netIncome - 36250);
        }
    else if (netIncome > 87850) {
        taxesOwed = 17891.25 + .28 * (netIncome - 87850);
        }
    return taxesOwed; 
}    

double IncomeTax::TaxRateCouple (double netIncome) {

    netIncome = grossIncome - 2*(P_E + S_D);
            
    if (netIncome <= 0) {
        taxesOwed = 0;
        }
    else if (netIncome > 0 && netIncome < 17850) {
        taxesOwed = (netIncome * .10);
        }
    else if (netIncome > 17850 && netIncome < 72500) {
        taxesOwed = 178.5 + .15 * (netIncome - 17850);
        }
    else if (netIncome > 72500) {
        taxesOwed = 9982.5 + .28 * (netIncome - 72500);
        }
    return taxesOwed;
}


int main() {
    
    
    
    IncomeTax user1;
    
    cout << "Enter your name: ";
    getline (cin, user1.userName);
    cout << endl;
    cout << "Are you married? Please answer yes or no: ";
    cin >> user1.maritalStatus;
    cout << endl;
    cout << "Enter your yearly salary: ";
    cin >> user1.salary;
    cout << "Enter any misc. income (tips, freelance, etc.): ";
    cin >> user1.other;
    cout << "Enter any interest earned: ";
    cin >> user1.interest;
    cout << "Enter any tax withholdings: ";
    cin >> user1.withheld;
    
    user1.grossIncome = user1.TotIncome(user1.salary, user1.other, user1.interest);
    
    if (user1.maritalStatus == "yes") {
        cout << "Your gross taxes owed: ";
        cout << user1.TaxRateCouple(user1.netIncome);
        cout << endl;
        user1.netOwed = user1.TaxRateCouple(user1.netIncome) - user1.withheld;
        cout << "Taxes owed after withholdings: ";
        cout << user1.netOwed << endl;
        if (user1.netOwed < 0) {
            cout << "You require a refund of: $";
            cout << user1.netOwed * (-1);
            cout << ".  Congrats!" << endl;
            }
        }
    else if (user1.maritalStatus == "no") {
        cout << "Your gross taxes owed: ";
        cout << user1.TaxRateIndividual(user1.netIncome);
        cout << endl;
        user1.netOwed = user1.TaxRateIndividual(user1.netIncome) - user1.withheld;
        cout << "Taxes owed after witholdings: ";
        cout << user1.netOwed << endl;
        if (user1.netOwed < 0) {
            cout << "You require a refund of: $";
            cout << user1.netOwed * (-1);
            cout <<".  Congrats!" << endl;
            }
        }
    else {
        cout << "Input error, marital status undetermined.";
        cout << endl;
        }
    
}