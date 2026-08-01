#include <iostream>

int getDigits(const int number);
int sumEvenDigits(const std::string cardNumber);
int sumOddDigits(const std::string cardNumber);
int main(){

    std::string cardNumber;
    std::cout << "Enter the credit card number: ";
    std::cin >> cardNumber;

    int result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << "The card number is valid.";
    }
    else{
        std::cout << "The card number is invalid.";
    }

    return 0;
}

int getDigits(const int number){
    int getNum;
    getNum = number % 10 + (number / 10 % 10);
    return getNum;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigits((cardNumber[i] - '0') * 2);
    }
    return sum;
}

int sumOddDigits(const std::string cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += getDigits(cardNumber[i] - '0');
    }
    return sum;
}
