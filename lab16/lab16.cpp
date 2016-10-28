#include <iostream>
#include <string>
using namespace std;

//GLOBAL VARIABLES
string Menu[10] = {"Salad", "Grilled Cheese", "Tomato Soup", "Yogurt Parfait", "Bourbon", "French Fries", "Fried Chicken", "Chocolate Milkshake", "Oatmeal", "Scrambled Eggs"};
double Price[10] = {3.00, 5.00, 3.00, 4.50, 1.75, 2.00, 8.75, 2.50, 3.00, 4.50};
int Order[100]; 
int i = 0;
int j = 0;

//PRINTS MENU and ACCEPTS ORDER storing in Order[] Array
void PrintMenu() {
    
    cout << "Menu: " << endl;    
    cout << "1. Salad" << endl;
    cout << "2. Grilled Cheese" << endl;
    cout << "3. Tomato Soup" << endl;
    cout << "4. Yogurt Parfait" << endl;
    cout << "5. Bourbon" << endl;
    cout << "6. French Fries" << endl;
    cout << "7. Fried Chicken" << endl;
    cout << "8. Chocolate Milkshake" << endl;
    cout << "9. Oatmeal" << endl;
    cout << "10. Scrambled Eggs" << endl << endl;
    
    cout << "What'll you be having then? Enter meal number(s). Type '0' when finished." << endl;
    
    for (i = 0; i < 100; ++i) {
        cin >> Order[i];
        if (Order[i] == 0) {
            break;
        }
    }
}

//PRINTS recitation of order back to user, CALCULATES total cost 
void PrintChoices (int array[]) {
    double totalCost = 0;
    cout << "You ordered: ";
    while (array[j] > 0) {
        cout << Menu[array[j] - 1] << ", ";
        totalCost = totalCost + Price[array[j] - 1];
        ++j;
    }
    cout << endl << "Total Cost: $" << totalCost;
}
    
    
int main () {   
    PrintMenu();
    PrintChoices(Order);
}