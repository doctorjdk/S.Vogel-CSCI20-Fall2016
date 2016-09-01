#include <iostream>
#include <string>
using namespace std;

int main (){
    
    int amountChange = 0;
    int numQuarters = 0;
    int valQuarters = 25;
    int numDimes = 0;
    int valDimes = 10;
    int numNickels = 0;
    int valNickels = 5;
    int numPennies = 0;
    int valPennies = 1;
    int totalDollars = 0;
    int totalCents = 0;
    double ourFeePercentage = 0.00109;
    double ourCut = 0.0;
    double yourFinalCheck = 0.0;
    
    cout<< "Please give me your money." <<endl;
    cin>> amountChange;
    cout<< "Thank you for your "<<amountChange<< " cents. Please hold while we calculate our cut, beep boop..."<<endl<<endl;
    
    numQuarters = amountChange / valQuarters;
    numDimes = (amountChange % valQuarters) / valDimes;
    numNickels = ((amountChange % valQuarters) % valDimes) / valNickels;
    numPennies = (((amountChange % valQuarters) % valDimes) % valNickels) / valPennies;
    
    cout<< "You deposited "<<numQuarters<< " Quarters, "<<numDimes<< " Dimes, "<<numNickels<< " Nickels, and "<<numPennies<<" Pennies."<<endl;
    
    totalDollars = amountChange / 100;
    totalCents = amountChange % 100;
    
    cout<< "For a total of: $"<<totalDollars<<"."<<totalCents<<endl;
    
    ourCut = (ourFeePercentage * amountChange);
    yourFinalCheck = (amountChange * 0.01) - ourCut;
    
    cout<<"The Coinstar Mafia will be holding onto $"<<ourCut<<" for your protection."<<endl;
    cout<<"You keep $"<<yourFinalCheck<<" and be careful not to cut yourself on those penny shavings, eh?"<<endl;
    
    
}