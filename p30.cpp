#include <iostream>


class Car{
    public:
    std::string name;
    std::string color;
    int model;
    bool engineOn;
    double speed;

    void paintCar(std::string c){
        color = c;
        std::cout << "Paint job done!\n";
    }
    void turnEngineOn(){
        engineOn = true;
        std::cout << "Turned the engine of " << name << " on.\n";
    }
    void turnEngineOff(){
        engineOn = false;
        std::cout << "Turned the engine of " << name << " off.\n";
    }
    void accelerate(double s){
        speed += s;
        std::cout << name << " accelerated.\n";
    }
    void brake(){
        double decrease = 20;
        speed -= decrease;
        std::cout << "Brake applied.\n";
    }
    void displaySpeed(){
        std::cout << "The speed of " << name << " is " << speed << "km/h.\n";
    }
    void printCarDetails(){
        std::cout << "Name: " << name << '\n';
        std::cout << "Color: " << color << '\n';
        std::cout << "Model: " << model << '\n';
        std::cout << "Engine: " << (engineOn ? "On\n" : "Off\n");
    }
};
int main(){
    Car car1;
    car1.name = "Ford Mustang";
    car1.color = "Silver";
    car1.model = 2023;
    car1.engineOn = false;
    car1.speed = 0;

    car1.paintCar("black");
    car1.turnEngineOn();
    car1.printCarDetails();
    car1.displaySpeed();
    car1.accelerate(90);
    car1.displaySpeed();
    car1.brake();
    car1.displaySpeed();
    
    return 0;
}