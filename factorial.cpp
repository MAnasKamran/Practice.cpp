#include <iostream>

using namespace std;

int main(){
    int n;
    int factorial = 1;
    cout << "Enter the number to find the factorial of: ";
    cin >> n;

    for(int i = 1; i <= n;i++){
        factorial *= i;
    }

    cout << "The factorial is: " << factorial << '\n';
    return 0;
}