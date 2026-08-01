#include <iostream>

int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 22;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum;//To avoid memory leak
    
    return 0;
}