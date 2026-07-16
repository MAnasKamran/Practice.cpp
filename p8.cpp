#include <iostream>

int main(){

    using namespace std;

    bool deviceOn = true;

    deviceOn ? cout << "The device is switched ON.\n" : cout << "The device is switched OFF.\n";

    deviceOn = false;

    deviceOn ? cout << "The device is switched ON." : cout << "The device is switched OFF.";

    return 0;
}