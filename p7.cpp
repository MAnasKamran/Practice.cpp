#include <iostream>
#include <cmath>

int main(){

    //Calculator
    using namespace std;

    char c;
    double a;
    double b;
    double result;

    cout << "************CALCULATOR************\n";
    cout << "Enter the first number: \n";
    cin >> a;

    cout << "Enter the second number: \n";
    cin >> b;


    cout << "Enter either (+,-,*,/): \n";
    cin >> c;


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

    cout << "**********************************";

    cin.ignore();
    cin.get();
    return 0;
}