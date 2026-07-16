#include <iostream>
#include <ctime>

int main(){

    using namespace std;

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = rand() % 100 + 1;

    cout << "********Number Guessing Game********\n";

    do{
    cout << "Enter your guess between (1-100): \n";
    cin >> guess;
    tries++;

    if (guess < num){
        cout << "Too low! Try again!\n";
    }
    else if (guess > num){
        cout << "Too high! Try again!\n";
    }
    else{
        cout << "Correct! # Tries: " << tries << '\n' ;
    }

    } while (guess != num);

    cout << "************************************";

    cin.ignore();
    cin.get();
    return 0;
}