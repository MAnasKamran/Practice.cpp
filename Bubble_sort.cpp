#include <iostream>

void sortArrayInAscendingOrder(int numbers[], int size);

void sortArrayInDescendingOrder(int array[], int size);

int main(){

    int size;
    int numbers[] = {10, 7, 6, 5, 4, 9, 8, 2, 3, 1};

    size = sizeof(numbers)/sizeof(numbers[0]);

    sortArrayInAscendingOrder(numbers, size);

    std::cout << "Array sorted in ascending order: \n";
    for(int element : numbers){
        std::cout << element << " ";
    }

    std::cout << "\n\nArray sorted in descending order: \n";

    sortArrayInDescendingOrder(numbers, size);

    for(int element : numbers){
        std::cout << element << " ";
    }

    return 0;
}

void sortArrayInAscendingOrder(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void sortArrayInDescendingOrder(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] < array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
