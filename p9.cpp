#include <iostream>

int main(){

    using namespace std;

    char unit;
    double temp;


    cout  << "************Temperature Converter************\n";
    cout << "                                              \n";

    cout << "Units: Celcius (C)\n";
    cout << "Fahrenheit (F)\n";
    cout << "Enter the unit you want to convert to:\n";
    cin >> unit;
    

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature: \n";
        cin >> temp;
        temp = (1.8 * temp) + 32.0;

        cout << "The temperature is: " << temp << "C. \n";
    }

    else if(unit == 'C' || unit == 'c'){
        cout << "Enter the temperature: \n";
        cin >> temp;
        temp = (temp/1.8) - 32.0;

        cout << "The temperature is: " << temp << "F. \n";
    }
    else{
        cout << "Invalid response! Select C or F only.\n";
    }


    cout << "                                            \n";
    cout  << "*********************************************";
    return 0;
}

