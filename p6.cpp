#include <iostream>
#include <cmath>

int main(){

    //hypotenuse calculator:

    using namespace std;
    double a;
    double b;
    double c;

    cout << "Enter the side A: ";
    cin >> a;

    cout << "Enter the side B: ";
    cin >> b;

    a = pow(a, 2) ;
    b = pow(b, 2);

    c = sqrt(a + b);

    cout << "The hypotenuse is: " << c << " cm.";

    cin.ignore();
    cin.get();

    return 0;
}
