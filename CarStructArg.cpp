#include <iostream>

struct Car{
    std::string name;
    std::string color;
    int model;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){
    Car car1;
    car1.name = "Mustang";
    car1.color = "Silver";
    car1.model = 2024;
    printCar(car1);


    Car car2;
    car2.name = "Corvette";
    car2.color = "Red";
    car2.model = 2025;
    printCar(car2);

    paintCar(car1, "Black");
    paintCar(car2, "Yellow");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout << "Car Details: \n\n";
    std::cout << "Name: " << car.name << '\n';
    std::cout << "Color: " << car.color << '\n';
    std::cout << "Model: " << car.model << "\n\n";
}

void paintCar(Car &car, std::string color){
    car.color = color;
    std::cout << "Paint job done!\n\n";
}