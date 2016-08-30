#inclue <iostream>
using namespace std;

int main()
{
    int numGuess = 0;
    int numScore = 11-numCin    //Total score is out of 10, 1 point deducted per incorrect guess
    int numCin = 0;             //Total number of guesses, calculated by summing the number of user inputs
    
    
    cout<<"Guess a number between 0-10: ";            //Screen prompts user to guess a number between 0-10
    cin>>numGuess;                                    //User enters guess
    cout<<endl;
    cout<<"Incorrect. Lose one point. Try Again?";    //Incorrect guess prompts user to guess again
    cout<<endl;
    cin>>numGuess;
    cout<<endl;
    cout<<"You must be psychic!";                     //Correct guess prompts winning dialogue
    cout<<endl;
    cout<<"Your Score: "<<numScore<<endl;                   
    
}


