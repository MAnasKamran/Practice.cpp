#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address was not assigned.\n";
    }
    else{
        std::cout << "Address assigned!\n";
        std::cout << *pointer;
    }
    return 0;
}