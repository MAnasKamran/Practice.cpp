#include <iostream>

struct car{
    std::string name;
    std::string color;
    int hp;
    bool hybrid;
};

int main(){
    car car1;
    car1.name = "Toyota Prius";
    car1.color = "Cutting Edge Silver";
    car1.hp = 194;
    car1.hybrid = true;

    car car2;
    car2.name = "Mustang Dark Horse";
    car2.color = "Black";
    car2.hp = 500;
    car2.hybrid = false;

    car car3;
    car3.name = "Honda Civic Type R";
    car3.color = "White";
    car3.hp = 315;
    car3.hybrid = false;

    car car4;
    car4.name = "BMW M3 Competition";
    car4.color = "Isle of Man Green";
    car4.hp = 503;
    car4.hybrid = false;


    std::cout << "Cars Details: \n\n";

    std::cout << "Car1: \n";
    std::cout << "Name: " << car1.name << '\n';
    std::cout << "Color: " << car1.color << '\n';
    std::cout << "Horsepower: " << car1.hp << " hp \n";
    std::cout << "Hybrid: " << (car1.hybrid ? "Yes\n\n" : "No\n\n");

    std::cout << "Car2: \n";
    std::cout << "Name: " << car2.name << '\n';
    std::cout << "Color: " << car2.color << '\n';
    std::cout << "Horsepower: " << car2.hp << " hp \n";
    std::cout << "Hybrid: " << (car2.hybrid ? "Yes\n\n" : "No\n\n");

    std::cout << "Car3: \n";
    std::cout << "Name: " << car3.name << '\n';
    std::cout << "Color: " << car3.color << '\n';
    std::cout << "Horsepower: " << car3.hp << " hp \n";
    std::cout << "Hybrid: " << (car3.hybrid ? "Yes\n\n" : "No\n\n");

    std::cout << "Car4: \n";
    std::cout << "Name: " << car4.name << '\n';
    std::cout << "Color: " << car4.color << '\n';
    std::cout << "Horsepower: " << car4.hp << " hp \n";
    std::cout << "Hybrid: " << (car4.hybrid ? "Yes\n\n" : "No\n\n");

    return 0;
}