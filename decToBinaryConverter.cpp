#include <iostream>

using namespace std;
int decToBinary(int n){
    int binaryNum = 0;
    int remainder;
    int pow = 1;
    while(n > 0){
        remainder = n % 2;
        binaryNum += remainder * pow;
        pow *= 10;
        n /= 2;
    }
    return binaryNum;
}
int main(){
    cout << "Decimal to Binary: \n";
    for(int i = 0;i <= 10; i++){
        cout << i << " = " << decToBinary(i) << '\n';
    }
    return 0;
}