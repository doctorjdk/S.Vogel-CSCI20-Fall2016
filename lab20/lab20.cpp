#include <iostream>
#include <cstring>
using namespace std;

int main () {
    char firststr[10];              //Declaring C-String character array
    int firstname = 0;              //Placeholder variable to store C-String length
    char *head = firststr;          //Declaring and initializing dereference-able arrays.  
    char *tail = firststr;
    
    cout << "Please enter a ten letter word or less: " << endl;
    cin >> firststr;                //Getting user input word, stored in C-String character array
    
    strlen(firststr);
    firstname = strlen(firststr);   //Setting int variable to C-String length
    
    cout << "Your word is: " << firststr << endl;
    
    if (firstname < 10) {           //If user input word is ten characters or less
        while (*head != '\0') {     //While value pointed to by variable is not Null
            cout << *head;          //Output value pointed to by variable character array
            head++;                 //Move to next larger index of character array        
        }
    }
    else {                          //If user input word is larger than ten characters ouput statement
        cout << "WARNING!  WORD TOO BIG TO DISPLAY!" << endl;
    }                           
    
    cout << endl;
    tail = &firststr[strlen(firststr) - 1]; //Assign char array 'tail' to memory address of last char of user input word
    if (firstname < 10) {                   //If user input word is ten characters or less          
        while (*tail > 0) {                 //While value pointed to by variable is larger than zero (ie; not index @ zero)
            cout << *tail;                  //Output value pointed to by variable character array
            tail--;                         //Move to next smaller index of character array
        }                                       //Reads and outputs user word backwards
    }
    
    cout << endl;
    head = firststr;                        //Reassign (reset) 'head' to user input word
    tail = &firststr[strlen(firststr) - 1]; //Reassign (reset) 'tail' to memory address of last char of user input word
    head++;                                 //Move to next larger index of char array 'head'
    tail--;                                 //Move to next smaller index of char array 'tail'
                                                //Side Note:  I had no idea we could run through an array like this outside
                                                //of a loop.  This is very interesting to see, thank you. 
                                        
    if (*head == *tail) {                   //If values in array 'head' are the same as values of the array 'tail'
        cout << "It is a palindrome." << endl;  //If user word read backward is the same as user word read forward
    }
    else {                                  //If values in array 'head' and 'tail' are not the same
        cout << "It is not a palindrome." << endl;
    }
    
    return 0;
    
}