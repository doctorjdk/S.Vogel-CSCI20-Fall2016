#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1; 
    string pluralNoun1;
    string noun2;
    string noun3;
    string place1;
    string place2;
    string time1;
    int num1;
    float num2;
    char moneySymbol = '$';
    
    
    cout<<"Pick a name: ";
    getline(cin, name1);
    cout<<endl;
    cout<<"Now pick a place, any place: ";
    getline(cin, place1);
    cout<<endl;
    cout<<"Let's have another place, different from the first: ";
    getline(cin, place2);
    cout<<endl;
    cout<<"Choose a plural noun: ";
    cin>>pluralNoun1;
    cout<<endl;
    cout<<"Choose a singular noun: ";
    cin>>noun2;
    cout<<endl;
    cout<<"Choose another singular noun: ";
    cin>>noun3;
    cout<<endl;
    cout<<"Now choose a time: ";
    cin>>time1;
    cout<<endl;
    cout<<"Pick an integer, any integer: ";
    cin>>num1;
    cout<<endl;
    cout<<"Okay last one, pick a number, any number even a decimal: ";
    cin>>num2;
    cout<<endl<<endl<<endl;
    
    
    cout<<name1<<" woke up to the sound of "<<pluralNoun1<<".  "<<"\""<<time1<<"! I'm late! But where did I leave my "<<noun2<<"?\""<<" she mused.  ";
    cout<<name1<<" began her search for the "<<noun2<<" under the "<<noun3<<".";
    cout<<"  \"Nope, not there! Maybe I left it in the "<<place1<<".\"";
    cout<<"  She simply couldn't go to the "<<place2<<" without her "<<noun2<<".  ";
    cout<<"\""<<num1<<" minutes til I have to be at the "<<place2<<"!\" "<<name1<<" panicked.";
    cout<<"  If she couldn't find her "<<noun2<<" then she would simply have to buy a new one on the way.  ";
    cout<<"\"Too bad a good "<<noun2<<" cost at least "<<moneySymbol<<num2<<".\""<<endl;
    
}