#include <iostream>

int main(){
    int numbers [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int first = numbers[0];
    
    int sizeOfArray = sizeof(numbers)/sizeof(numbers[1]);
    std::cout << "Placing the first element of the array: [ "; 
    for(int i = 0; i < sizeOfArray; i++){
        if(i < sizeOfArray - 1){
        std::cout << numbers[i] << ", ";
        }
        else{
            std::cout << numbers[i] << " ";
        }
    } 
    std::cout << "] at the last index.\n";

    for(int i = 0; i < sizeOfArray - 1; i++){
        numbers[i] = numbers[i + 1];
    }

    numbers[sizeOfArray - 1] = first;

    std::cout << "[ ";
    for(int i = 0; i < sizeOfArray; i++){
        if(i < sizeOfArray - 1){
        std::cout << numbers[i] << ", ";
        }
        else{
            std::cout << numbers[i] << " ";
        }
    }
    std::cout << "]";

    
    return 0;
}