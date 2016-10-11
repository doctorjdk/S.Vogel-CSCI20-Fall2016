#include <iostream>
using namespace std;

//QUESTION 1
bool isGreater (int suzyAge, int johnAge) {
    if (suzyAge < johnAge) 
        return true; 
    else return false;
}

//QUESTION 2
bool isGreaterEqual (int x, int y) {
    if (x >= y)
        return true;
    else return false;
}

//QUESTION 3
bool isEqual (int a, int b) {
    if (a == b)
        return true;
    else return false;
}

//QUESTION 4
bool isQ4 (int limit, int count) {
    if (((limit * count) / 2) > 0)
        return true;
    else return false;
}

//QUESTION 5
bool isQ5 (int t, int z) {
    if (t > 5 || z < 2)
        return true;
    else return false;
}

//QUESTION 6
bool isQ6 (int variable) {
    if (!(variable > 0))
        return true;
    else return false;
}

//QUESTION 7
bool isQ7 (int a) {
    if (((a / 4) < 8) && a >=4)
        return true;
    else return false;
}

//QUESTION 8
bool isQ8 (int x, int y, int z) {
    if ((x * y) < 10 || (y * z) < 10)
        return true;
    else return false;
}

//QUESTION 9
bool isQ9 (int j, int k, int l) {
    if ((!(j * l) < 10) || (k / j) * 4 < k * 2)
        return true;
    else return false;
}


int main () {
   
   //QUESTION 1
   cout << "Question 1:" << endl;
   if (isGreater(25,21))
        cout << "Suzy is younger than John." << endl;
    else
        cout << "Suzy is older than John." << endl;

    
    //QESTION 2
    cout << "Question 2:" << endl;
    if (isGreaterEqual(7,7))
        cout << "x is greater than or equal to y." << endl;
    else 
        cout << "y is greater than x." << endl;
        
    
    //QUESTION 3
    cout << "QUESTION 3:" << endl;
    if (isEqual(1,9))
        cout << "a is equal to b." << endl;
    else 
        cout << "a is not equal to b." << endl;
        
    //QESTION 4
    cout << "Question 4:" << endl;
    if (isQ4(20,10))
        cout << "Limit times Count divided by 2 is greater than zero." << endl;
    else    
        cout << "Limit times Count divided by 2 is less than zero." << endl;
        
    //QUESTION 5
    cout << "Question 5:" << endl;
    if (isQ5(-4,0))
        cout << "t is greater than 5 and/or z is less than 2." << endl;
    else 
        cout << "t is less than 5 and/or z is greater than 2." << endl;
        
    //QUESTION 6
    cout << "Question 6:" << endl;
    if (isQ6(-5))
        cout << "Variable is not greater than zero." << endl;
    else 
        cout << "Variable is greater than zero." << endl;
        
    //QUESTION 7
    cout << "Question 7:" << endl;
    if (isQ7(16))
        cout << "a is greater than four and a divided by four is less than eight." << endl;
    else
        cout << "a is less than four and a divided by four is greater than eight." << endl;
        
    //QUESTION 8
    cout << "Question 8:" << endl;
    cout << "This question failed because var z was not declared." << endl;
    cout << "I assigned z as zero to avoid the error message." << endl;
    if (isQ8(-2,5,0))
        cout << "x times y is less than ten, or y times z is less than ten." << endl;
    else
        cout << "x times y is greater than ten, or y times z is greater than ten." << endl;
        
    //QUESTION 9
    cout << "Question 9:" << endl;
    cout << "This question failed because var x and var y were not declared." << endl;
    cout << "I reassigned the variables so that x = j and y = k to avoid the error." << endl;
    if (isQ9(-2,5,4))
        cout << "j times l is greater than ten or j times k divided by four is less than k times 2." << endl;
    else
        cout << "j times l is less than ten or j times k divided by four is greater than k times 2." << endl;
    
    
    
    
    
    
    
    
    
}