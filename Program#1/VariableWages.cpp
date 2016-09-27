# include <iostream>
# include <string>
using namespace std;


void Copyright() {
    char star = '*';

    
    cout << "           " << star << endl;
    cout << "         " << star << " S " << star << endl;
    cout << "       " << star << "   V   " << star << endl;
    cout << "Copyright Shannon Vogel 2016" << endl;
   
   return; 
};




int main (){
    
    double dollarsPerHour;
    double hrsPerDay;
    int daysPerWeek;
    double taxRate = .17;
    
    cout << "How much do you earn per hour?" << endl;
    cin >> dollarsPerHour;
    cout << "How many hours do you work per day?" << endl;
    cin >> hrsPerDay;
    cout << "How many days do you work per week?" << endl;
    cin >> daysPerWeek;
    
    double weeklySalary = (dollarsPerHour * hrsPerDay * daysPerWeek);
    
    cout << "Your weekly salary before taxes: $";
    cout << weeklySalary << endl;
    cout << "Your weekly salary after taxes: $";
    
    double afterTaxes = weeklySalary - (weeklySalary * taxRate);
    
    cout << afterTaxes <<endl;
    cout << "Assuming you work like a dog 52 weeks a year, you pay Big Brother ";
    
    double yearlyTaxes = (weeklySalary * 52 * taxRate);
     
    cout << yearlyTaxes << " dollars every damn year.";
    cout << endl << endl << endl;
    
    Copyright ();
    
}


