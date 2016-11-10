#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



//VARIABLES
    ifstream fileFS;
    string userFile;
    ofstream outfileFS;
    int numRows = 0;
    const int numCols = 4;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int sum = 0;
    int rowSum[100];
    int colSum[4];
    int fileMatrix[100][numCols];


//OPEN FILE FUNCTION
void GetFile() {
    cout << "Choose a file to use: ";
    cin >> userFile;
    cout << "Opening file" << userFile << "...." << endl;
    fileFS.open(userFile); 
    if(!fileFS.is_open()) {
        cout << "Could not open file." << endl;
        return;
    }
}

//READ FILE TO ARRAY FUNCTION
void GetMatrix() {
    GetFile();
    
    cout << "Enter number of rows in Matrix: ";
    cin >> numRows;
    
    while (i < numRows) {
        while (j < numCols) {
            fileFS >> fileMatrix[i][j];
            ++j;
        }
        j = 0;
        ++i;
    }
    
    cout << "Original Matrix from file: " << endl;
    i = 0;
    j = 0;
    for (i = 0; i < numRows; ++i) {
        for (j = 0; j < numCols; ++j) {
            cout << fileMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

//SUM ROWS AND COLS FUNCTION    
void SumMatrix() {
    GetMatrix();
    
    //ROW SUMS
    i = 0;
    j = 0;
    while (i < numRows) {
        while (j < numCols) {
            sum = sum + fileMatrix[i][j];
            ++j;
        }
        rowSum[k] = sum;
        j = 0;
        sum = 0;
        ++i;
        ++k;
    }
    
    //COL SUMS
    i = 0;
    j = 0;
    while (j < numCols) {
        while (i < numRows) {
            sum = sum + fileMatrix[i][j];
            ++i;
        }
        colSum[l] = sum;
        i = 0;
        sum = 0;
        ++j;
        ++l;
    }
    
    cout << endl << "Row Sums: ";
    for (k = 0; k < numRows; ++k) {
        cout << rowSum[k] << " ";
    }
    cout << endl << "Col Sums: ";
    for (l = 0; l < numCols; ++l) {
        cout << colSum[l] << " ";
        }
    cout << endl << endl;
}

//OUTPUT TO FILE FUNCTION
void Output () {
    SumMatrix();
    
    outfileFS.open("output.txt");
    if (!outfileFS.is_open()) {
        cout << "Could not open file." << endl;
    }
    
    i = 0;
    j = 0;
    k = 0;
    l = 0;
    for (i = 0; i < numRows; ++i) {
        for (j = 0; j < numCols; ++j) {
            outfileFS << setw(4) << left << fileMatrix[i][j] << " ";
        }
        if (k == i) {
            outfileFS << " " << rowSum[k];
            ++k;
        }
        outfileFS << endl;
    }
    for (l = 0; l < numCols; ++l) {
    outfileFS << setw(4) << left << colSum[l] << " ";
    }
    outfileFS << endl;
}
    

//PRINT FUNCTION
void Print() {
    SumMatrix();
    
    i = 0;
    j = 0;
    k = 0;
    l = 0;
    for (i = 0; i < numRows; ++i) {
        for (j = 0; j < numCols; ++j) {
            cout << setw(4) << left << fileMatrix[i][j] << " ";
        }
        if (k == i) {
            cout << " " << rowSum[k];
            ++k;
        }
        cout << endl;
    }
    for (l = 0; l < numCols; ++l) {
    cout << setw(4) << left << colSum[l] << " ";
    }
    cout << endl;
}

//MAIN FUNCTION    
int main () {
   Print();
   Output();
    
}