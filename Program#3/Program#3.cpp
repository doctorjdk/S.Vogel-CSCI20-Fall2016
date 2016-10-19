#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class NumberGame {
    public:
        int GetRandomNumber(int range1, int range2);
        void Guess();
    
    private:
        int x;
        int userGuess;
        int score;
};


int NumberGame::GetRandomNumber(int range1, int range2) {
    srand(time(NULL));
    x = ((rand() % (range2 - range1 + 1)) + range1);
    return x;
}

void NumberGame::Guess() {
    score = 10;
    cin >> userGuess;
    for (userGuess; userGuess != x; --score) {
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
    int userRange1;
    int userRange2;
    
    NumberGame user1;

    cout << "What number am I thinking of?" << endl;
    cout << "Pick your own number range!" << endl << endl;
    
    cout << "Enter beginning number in range: ";
    cin >> userRange1;
    cout << "Enter ending number in range: ";
    cin >> userRange2;
    cout << endl;
    
    cout << "Okay got it. Guess a number between " << userRange1 << " and " << userRange2 << ": ";
    
    user1.GetRandomNumber(userRange1, userRange2);
    user1.Guess();
    
}