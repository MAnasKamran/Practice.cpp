#include <iostream>
#include <iomanip>


void showBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {

    double balance = 0;
    int choice = 0;

    do{
    
        std::cout << "***************Banking System***************\n\n";
        std::cout << "Select and enter from the choices below: \n";
        std::cout << "1- Show Balance: \n";
        std::cout << "2- Deposit: \n";
        std::cout << "3- Withdraw: \n";
        std::cout << "4- Exit: \n";
        std::cout << "\n********************************************\n";
        std::cin >> choice;

        switch(choice){
        case 1:
        showBalance(balance);
        break;

        case 2:
        deposit(balance);
        break;

        case 3:
        withdraw(balance);
        break;

        case 4:
        std::cout << "Thanks for visiting! Exiting...\n";
        break;

        default:
        std::cout << "Invalid choice! Please select a choice (1-4) from the given choices.\n";
        break;
    }
    } while(choice != 4);

     std::cin.clear(); 
      while (std::cin.get() != '\n'); 
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    std::cout << "\nProgram finished. Press Enter key again to close this window...";
    std::cin.get();

    return 0;
}

void showBalance(double balance) {
        std::cout << "The current Balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
        std::cout << "                          \n";
    }

void deposit(double &balance){
    double amount = 0;
    std:: cout << "Enter the amount to be deposited: $\n";
    std:: cin >> amount;

    if(amount < 0){
        std::cout << "Invalid amount! Enter a positive amount.\n";
    }
    else{
        balance += amount;
    }
    std::cout << "Amount deposited: $" << amount << '\n';
    std::cout << "                          \n";
    }

void withdraw(double &balance){
    double amount = 0;
    std::cout << "Enter the amount to be withdrawn: $\n";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficent funds!\n\n";
    }
    else if (amount < 0 ){
        std::cout << "Enter a positive amount to be withdrawn!\n";
    }
    else{
        balance -= amount;
    }
    std:: cout << "Amount withdrawn: $" << amount << '\n';
    std::cout << "                          \n";
}
