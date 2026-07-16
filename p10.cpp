#include <iostream>
#include <cmath>

int main(){

    //Calculator
    using namespace std;

    char c;
    double a;
    double b;
    double result;
    bool isRunning = true;



    while (isRunning) {
    cout << "************CALCULATOR************\n";
    cout << "Enter the first number: \n";
    cin >> a;

    cout << "Enter the second number: \n";
    cin >> b;


    cout << "Enter either (+,-,*,/) or Q to quit: \n";
    cin >> c;


    if(c == 'Q' || c == 'q'){
        cout << "Exiting...\n";
        isRunning = false;
        break;
    }

    switch(c) {
        case '+':
        result = a + b;
        cout << "The sum is: " << result << '\n';
        break;

        case '-':
        result = a - b;
        cout << "The difference is: " << result << '\n';
        break;

        case '*':
        result = a * b;
        cout << "The product is: " << result << '\n';
        break;

        case '/':
        result = a/b;
        cout << "The quotient is: " << result << '\n';
        break;

        default:
        cout << "That was not a valid operator! \n";
        break;
    }


    cout << "**********************************\n";
    }

    cin.clear();

    cin.ignore(1000, '\n');
    cout << "Press enter to close the program...";
    cin.get();
    return 0;

}