#include <iostream>

int main(){
    int n;
    int count = 1;
    int sum = 0;
    std::cout << "Enter the number up till which you want to calculate the sum starting from 1: ";
    std::cin >> n;

    for(int i = 1; i <= n; i++){
        sum += count;
        count++;
    }
    std::cout << "The sum is: " << sum << '\n';
    
    return 0;
}