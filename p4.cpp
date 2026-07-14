#include <iostream>

typedef std::string s;

int main(){

    using namespace std;
    s s1 = "Heyy there!\n";

    cout << s1;

    s name;
    int age;


    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hey " << name << ".\n";
    cout << "You are " << age << " years old.";

    cin.ignore();
    cin.get();

    return 0;
}