#include <iostream>
#include <ctime>
#include <cctype>
#include <conio.h>

char getUserChoice();

void showUserChoice(char choice);

char getComputerChoice();
void showComputerChoice(char choice);

void chooseWinner(char player, char computer);



int main(){

    char player;
    char computer;
    char c;

    srand(time(NULL));

    do{
        player = getUserChoice();
    showUserChoice(player);

    computer = getComputerChoice();
    showComputerChoice(computer);

    chooseWinner(player, computer);
    std::cout << "Press any key to keep playing or press E to exit...!\n";
    c = _getch();
    c = std::toupper(c);

    } while(c != 'E');

    std::cout << "Thanks for playing! See you around.\n";
    
    std::cout << "Press any key to close this window.";

    _getch();
    
    // std::cin.clear();

    // while (std::cin.get() != '\n');

    // std::cin.clear();

    // std::cin.ignore(10000, '\n');

    // std::cin.get();

    return 0;
}

char getUserChoice(){
    char player;

    do{
    std::cout << "Rock-Paper-Scissors-Game\n";
    std::cout << "Choose from the following: \n";
    std::cout <<"**************************\n";
    std::cout << "R/r for Rock: \n";
    std::cout << "P/p for Paper: \n";
    std::cout << "S/s for Scissors: \n";
    std::cin >> player;
    player = std::toupper(player);

    } while (player != 'R' && player != 'P' && player != 'S');

    return player;
}

void showUserChoice(char choice){

    switch(choice){
        
        case 'R':
        std::cout << "Choice : Rock \n";
        break;

        case 'P':
        std::cout << "Choice : Paper \n";
        break;

        case 'S':
         std::cout << "Choice : Scissors \n";
        break;

        default: 
        std::cout << "Invalid choice! Select from the given choices! \n";
        std::cout << "**********************************************";
        break;
    }
}

char getComputerChoice(){

    char computer;
    int num;


    num = rand() % 3 + 1;

    switch(num){

        case 1:
        computer = 'R';
        break;

        case 2:
        computer = 'P';
        break;

        case 3:
        computer = 'S';
        break;

        default:
        std::cout << "Error!";
        break;
    }
    return computer;

}

void showComputerChoice(char choice){

    switch(choice){
        case 'R':
        std::cout << "Computer Choice: Rock \n";
        break;

        case 'P':
        std::cout << "Computer Choice : Paper \n";
        break;

        case 'S':
        std:: cout << "Computer choice: Scissors \n";
        break;

        default:
        std::cout << "Error!";
        break;
    }
}

void chooseWinner(char player, char computer){
    if(player == 'R' && computer == 'S' 
    || player == 'P' && computer == 'R' 
    || player == 'S' && computer == 'P'){

        std::cout << "The player wins!!\n";
    }
    else if(
    player == computer){
        std::cout << "It's a draw!\n";
    }
    else{
        std::cout << "The Computer wins!!\n";
    }

}