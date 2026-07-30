#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char marker);
void computerMove(char *spaces, char marker);
bool checkWinner(char *spaces, char marker, int gameMode);
bool checkTie(char *spaces);

int main(){

    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char currentPlayer = 'X'; // Start with Player X
    bool running = true;
    int gameMode = 1;

    srand(time(NULL));

    std::cout << "=======TIC TAC TOE======\n";
    std::cout << "Select the game mode you want to play: \n";
    std::cout << "1. Play against the computer.\n";
    std::cout << "2. Play against another player (Local).\n";
    std::cout << "Select the game mode (1 or 2): ";
    std::cin >> gameMode;

    drawBoard(spaces);

    while(running){
        if(gameMode == 1 && currentPlayer == 'O'){
            std::cout << "Computer's turn (O): \n";
            computerMove(spaces, currentPlayer);
        }
        else {
            std::cout << "Player " << currentPlayer << "'s turn: \n" ;
            playerMove(spaces, currentPlayer);
        }

        drawBoard(spaces);
        if(checkWinner(spaces, currentPlayer, gameMode)){
            running = false;
            break;
        }
        if(checkTie(spaces)){
            running = false;
            break;
        }
        currentPlayer = (currentPlayer == 'X' ? 'O' : 'X');
    }

    std::cout << "Thanks for playing.\n";

    std::cout << "Press Enter to exit...";
    std::cin.clear(); // Clear any error flags from input
    std::cin.ignore(10000, '\n'); // Discard leftover characters
    std::cin.get(); // Wait for user to press Enter

    return 0;
}


void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |" << "     |" << "     " << '\n';
    std::cout << "  " << spaces[0] << "  |" << "  " << spaces[1] << "  |" << "  " << spaces[2] << "  " << '\n';
    std::cout << "_____|" << "_____|" << "_____" << '\n';
    std::cout << "     |" << "     |" << "     " << '\n';
    std::cout << "  " << spaces[3] << "  |" << "  " << spaces[4] << "  |" << "  " << spaces[5] << "  " << '\n';
    std::cout << "_____|" << "_____|" << "_____" << '\n';
    std::cout << "     |" << "     |" << "     " << '\n';
    std::cout << "  " << spaces[6] << "  |" << "  " << spaces[7] << "  |" << "  " << spaces[8] << "  " << '\n';
    std::cout << '\n';
}
void playerMove(char *spaces, char marker){
    int number;
    while(true) {
        std::cout << "Enter a spot to place a marker (between 1-9): ";
        std::cin >> number;
        number--;
        
        if(number >= 0 && number < 9 && spaces[number] == ' '){
           spaces[number] = marker;
           break;
        } else {
            std::cout << "Invalid move! Spot is either taken or out of bounds. Try again.\n";
        }
    }
}
void computerMove(char *spaces, char marker){
    int number;
    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces[number] = marker;
            break;
        }
    }
}
bool checkWinner(char *spaces, char marker, int gameMode){
    int winLines[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, 
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, 
        {0, 4, 8}, {2, 4, 6}             
    };
    for(int i = 0; i < 8; i++){
        if(spaces[winLines[i][0]] != ' ' && spaces[winLines[i][0]] == spaces[winLines[i][1]] &&
           spaces[winLines[i][1]] == spaces[winLines[i][2]]){
            if(gameMode == 1){
                if(marker == 'X'){
                    std::cout << "You win!\n";
                } else{
                    std::cout << "You lose! The computer won!\n";
                }
            }
            else{
                std::cout << "The player " << marker << " wins!\n";
            }
            return true;
        }
    }
    return false;
}
bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "It's a tie!\n";
    return true;
}