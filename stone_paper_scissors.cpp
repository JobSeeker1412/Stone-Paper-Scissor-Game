#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string userChoice, compChoice;
    int randomNum;

    srand(time(0));

    cout << "Enter your choice (stone / paper / scissors): ";
    cin >> userChoice;

    for (int i = 0; i < userChoice.length(); i++) {
        userChoice[i] = tolower(userChoice[i]);
    }

    randomNum = rand() % 3;

    if (randomNum == 0)
        compChoice = "stone";
    else if (randomNum == 1)
        compChoice = "paper";
    else
        compChoice = "scissors";

    cout << "\nYour choice: " << userChoice << endl;
    cout << "Computer choice: " << compChoice << endl;

    if (userChoice == compChoice) {
        cout << "Result: It's a Draw!" << endl;
    }
    else if ((userChoice == "stone" && compChoice == "scissors") ||
             (userChoice == "paper" && compChoice == "stone") ||
             (userChoice == "scissors" && compChoice == "paper")) {
        cout << "Result: You Win!" << endl;
    }
    else {
        cout << "Result: Computer Wins!" << endl;
    }

    return 0;
}
