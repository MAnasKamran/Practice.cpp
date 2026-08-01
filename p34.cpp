#include <iostream>

class Animal{
    public:
    bool alive = true;

    void eat(){
        std::cout << "The animal is eating.\n";
    }
};

class Dog : public Animal{
    public:
    void eat(){
        std::cout << "The dog is eating.\n";
    }
};
int main(){
    Dog dog;
    std::cout << (dog.alive ? "The dog is alive.\n" : "The dog is dead.\n");
    dog.eat(); 
    return 0;
}