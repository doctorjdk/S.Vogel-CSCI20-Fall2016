#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Number Guessing Game


//Class to hold functions and variables related to Game
class NumberGame {
    public:
        int GetRandomNumber(int range1, int range2); //Function to generate random number
        void Guess(); //Function to accept user guesses and provide appropriate output
    
    private:
        int x; //Stores random number
        int userGuess; //Stores user inputs
        int score; //Stores user score based on number of failed guesses
};

//Random number generator: generates random number using current time to begin string
//Number Range based on user declared values
int NumberGame::GetRandomNumber(int range1, int range2) {
    srand(time(NULL));
    x = ((rand() % (range2 - range1 + 1)) + range1);
    return x;
}

//Function tasked with: getting user guesses
//                      sorting guess into one of three categories - high, low, correct
//                      tracking number of incorrect guesses to calculate score
void NumberGame::Guess() {
    score = 10; //Maximum score is 10 points
    cin >> userGuess;
    for (userGuess; userGuess != x; --score) { //Score value is decremented while user guess is not the random number
        if (userGuess < x) {
        cout << "Too low.  Try again: ";
        cin >> userGuess;
        continue;
        }
        else if (userGuess > x) {
            cout << "Too high.  Try again: ";
            cin >> userGuess;
            continue;
        }
    }
    if (userGuess == x) {
        cout << "Correct!  You win!  You used " << (11 - score) << " guesses. Your score is: " << score;
    }
}



int main () {
    int userRange1;  //Variables to store user input range values
    int userRange2;
    
    NumberGame user1;

    cout << "What number am I thinking of?" << endl;        //Opening comments
    cout << "Pick your own number range!" << endl << endl; 
    
    cout << "Enter beginning number in range: ";    //Asking for range values
    cin >> userRange1;
    cout << "Enter ending number in range: ";
    cin >> userRange2;
    cout << endl;
    
    cout << "Okay got it. Guess a number between " << userRange1 << " and " << userRange2 << ": ";  //Initiating number guessing game
    
    user1.GetRandomNumber(userRange1, userRange2); //Accessing class function to set random number based on user range values
    user1.Guess(); //Accessing class function to run user guess contingencies
    
}