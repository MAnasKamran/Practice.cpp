#include <iostream>

using namespace std;

int binaryToDec(int n){
    int decimalNum = 0;
    int r;
    int pow = 1;
    while(n > 0){
        r = n % 10;
        decimalNum += r * pow;
        pow *= 2;
        n /= 10;
    }
    return decimalNum;
}
int main(){
    cout << binaryToDec(1010);
    return 0;
}