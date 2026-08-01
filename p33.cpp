#include <iostream>

class EStove{
    private:
    int temperature;
    

    public:
    bool switchOn;
    EStove(int temperature){
        setTemperature(temperature);
    }

    int getTemperature(){
        return temperature;
    }

    void setTemperature(int temperature){
        if(temperature > 100 || temperature < 0){
            std::cout << "Invalid! Enter a temperature between 0-100 degree celsius.";
        }
        else{
            this->temperature = temperature;
        }
    }
    void turnOn(){
            switchOn = true;
            std::cout << "EStove turned on." << '\n';
        }
    
    void turnOff(){
        switchOn = false;
        std::cout << "EStove turned off." << '\n';
    }
};
int main(){
    EStove stove1(10);
    std::cout << "Current set temperature: " << stove1.getTemperature() << " degrees" << '\n';
    stove1.turnOn();
    stove1.setTemperature(90);
    std::cout << "Temperature after setting the temperature: " << stove1.getTemperature() << " degrees"<< '\n';
    stove1.turnOff();
    return 0;
}