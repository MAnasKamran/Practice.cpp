#include <iostream>

int factorial (int num);
int main(){
    int n;

    std::cout << "Enter the number to find the factorial of: ";
    std::cin >> n;
    std::cout << '\n';

    std::cout << "Answer: ";
    std::cout << factorial(n);

    return 0;
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    } else{
        return 1;
    }
}