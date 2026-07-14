#include <iostream>

int main(){
    //Calculating the circumference of a circle by taking input.

        double pi = 3.14;
        double r;
        

        std::string unit = "cm";

        std::cout << "Enter the radius (in cm) of the circle: " << '\n';
        std::cin >> r;

        double circumference = 2 * pi * r;

        std::cout << "The circumference of the circle is: " << circumference << " " << unit;
    
    return 0;
}