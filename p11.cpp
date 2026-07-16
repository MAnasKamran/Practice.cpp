#include <iostream>


int main() {

    using namespace std;

    int rows;
    int columns;
    char symbol;

    cout << "How many rows do you want in the rectangle?\n";
    cin >> rows;

    cout << "How many columns do you want in the rectangle?\n";
    cin >> columns;

    cout << "What symbol do you want to use that makes up the rectangle?\n";
    cin >> symbol;
    cout << "         \n";


    for(int i = 1; i <= rows; i++){
        for(int i = 1; i <= columns; i++){
            cout << symbol;
        }
        cout << '\n';
    }

    cin.ignore();
    cin.get();
    return 0;
}

