#include <iostream>

using namespace std;

int revNum(int n){
    int reversedNum = 0;
    int r;
    while(n > 0){
        r = n % 10;
        reversedNum = reversedNum * 10 + r;
        n /= 10;
    }
    return reversedNum;
}
int main(){
    int num;
    cout << "Enter the integer you want to reverse: ";
    cin >> num;
    cout << revNum(num) << '\n';
    return 0;
}