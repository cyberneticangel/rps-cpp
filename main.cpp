#include <iostream>

using namespace std;

// Constant variables
const char ROCK = 'r';
const char PAPER = 's';
const char SCISSORS = 's';

char get_computer_option() {
    srand(time(0));
    // random number, will generate either 1, 2, 3 (rock, paper, scissors)
    int num = rand() % 3 + 1;

    if(num == 1) return 'r';
    if(num == 2) return 'p';
    if(num == 3) return 's';
}

char get_user_option() {
    char user_choice;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options" << endl;
    cout << "-----------------------------------" << endl;
    cout << "(r) for rock" << endl << "(p) for paper" << endl << "(s) for scissors" << endl;
    cin >> user_choice;

    while(user_choice != 'r' && user_choice != 'p' && user_choice != 's') {
        cout << "Please enter one of the following options only." << endl;
        cout << "(r) for rock" << endl << "(p) for paper" << endl << "(s) for scissors" << endl;
        cin >> user_choice;
    }
    return user_choice;
}

void show_selected_option(char option) {
    if(option == 'r') cout << "Rock" << endl;
    if(option == 'p') cout << "Paper" << endl;
    if(option == 's') cout << "Scissors" << endl;
}

void choose_winner(char user_choice, char computer_choice) {
    if(user_choice == ROCK && computer_choice == PAPER) {
        cout << "Computer wins! Paper wraps Rock." << endl;
    }
    else if(user_choice == PAPER && computer_choice == SCISSORS) {
        cout << "Computer wins! Scissors cut Paper." << endl;
    }
    else if(user_choice == SCISSORS && computer_choice == ROCK) {
        cout << "Computer wins! Rock crushes Scissors." << endl;
    }
    else if(user_choice == PAPER && computer_choice == ROCK) {
        cout << "You win! Paper wraps Rock." << endl;
    }
    else if(user_choice == ROCK && computer_choice == SCISSORS) {
        cout << "You win! Rock crushes Scissors." << endl;
    }
    else if(user_choice == SCISSORS && computer_choice == PAPER) {
        cout << "You win! Scissors cut Paper." << endl;
    }
    else {
        cout << "Tie. Play again." << endl;
    }
}

int main() {
    // TODO: Add score tracker
    char user_choice;
    char computer_choice;

    user_choice = get_user_option();
    cout << "Your choice is: " << endl;
    show_selected_option(user_choice);

    cout << "Computers choice is: " << endl;
    computer_choice = get_computer_option();
    show_selected_option(computer_choice);

    choose_winner(user_choice, computer_choice);

    return 0;

}