#include <iostream>
using namespace std;

class numberGuess {
    int randomNumber;
    int count = 0;
public:

    void startGame() {
        char option;
        cout << "\t\t\t\t\t *****NUMBER GUESSING GAME*****\n\n";
        cout << "Do you want to play number guessing game (Yes/No)? Enter 'y' or 'Y' for yes and 'n' or 'N' for No:\n";
        cin >> option;
        if (option == 'y' || option == 'Y') {
            cout << "\nGAME RULES:\n1. The Random Number Will be Between 0-99\n2. After each attempt you will be notified that your Guessed Number is greater, less or equal to the Random Number\n";
            generateNumber();
        }
        else {
            exit(0);
        }
    }
    void generateNumber() {
        randomNumber = rand() % 100;// it will generate a random number from 0-99
        guessnumber();
    }
    void guessnumber() {
        int no;
        cout << "\nGuess any number: \n";
        cin >> no;
        if (no < randomNumber) {
            cout << "Your number is less than the Random Number\n";
            count++;
            guessnumber();
        }
        else if (no > randomNumber) {
            cout << "Your number is greater than the Random Number\n";
            count++;
            guessnumber();
        }
        else if (no == randomNumber)
            cout << "\n***CONGRATULATIONS***\nYOU GUESSED THE RIGHT NUMBER IN "<<count<<" ATTEMPTS\n";
    }
};

int main()
{
    numberGuess n;
    n.startGame();
    return 0;
}