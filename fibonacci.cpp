#include <iostream>

using namespace std;

void fibonacci(int n){
    int t1 = 0, t2 = 1, total = 0;

    cout << "The Fibonacci Series: \n";
    for(int i = 2; i <= n; i++){
        cout << t1 << " ";

        total = t1 + t2;
        t1 = t2;
        t2 = total;
    }
}
int main(){
    int num; 
    cout << "Enter the number for the fibonacci series: ";
    cin >> num;
    if(num <= 0){
        cout << "Enter a positive number greater than 0.\n";
    }
    else{
        fibonacci(num);
    }
    
    return 0;
}