#include <iostream>
#include <string>
using namespace std;

double ToPounds(double& Kilos) {
    
    double kilosToPounds;
    kilosToPounds = (Kilos * 2.20462);
    return kilosToPounds;
}


double ToKilo(double& Pounds) {
    
    double poundsToKilos;
    poundsToKilos = (Pounds / 2.20462);
    return poundsToKilos;
    }
    
int main(){
    double userKilos;
    double userPounds;
    
    cout << "Please enter number of kilograms: ";
    cin >> userKilos;
    cout << userKilos << " kilogram(s) equals " << ToPounds(userKilos) << " pounds." << endl << endl;
     
    
    cout << "Please enter number of pounds: ";
    cin >> userPounds;
    cout << userPounds << " pound(s) equals " << ToKilo(userPounds) << " kilograms." << endl;
}
    
