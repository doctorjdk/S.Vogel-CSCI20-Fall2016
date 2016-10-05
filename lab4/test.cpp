#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds (vector<int>& sortVector)
{
    
    int i = 0;
    int tempVal = 0;
    
    for (i = 0; i < sortVector.size(); ++i) {
        
        tempVal = sortVector.at(i);
        sortVector.at(0) = sortVector.at(sortVector.size()-1);
        sortVector.at(sortVector.size()-1) = tempVal;
        
    }
    
    return;
}

int main () 
{
    vector<int> sortVector(4);
    int i = 0;
    
    sortVector.at(0) = 10;
    sortVector.at(1) = 20;
    sortVector.at(2) = 30;
    sortVector.at(3) = 40;
    
    
    SwapVectorEnds(sortVector);
    
    for (i = 0; i <sortVector.size(); ++i){
        cout << sortVector.at(i) << " ";
    }
    
    cout << endl;
    return 0;
}