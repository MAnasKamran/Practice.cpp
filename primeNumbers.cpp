#include <iostream>

using namespace std;

bool checkPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void printPrimesUptoNum(int n){
    if(n <= 1){
        cout << "The number shoulde be greater than 1.\n";
    }
    for(int i = 2; i <= n; i++){
        if(checkPrime(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int num;
    cout << "Enter the number you want to print prime numbers upto: ";
    cin >> num;
    printPrimesUptoNum(num);
    return 0;
}