#include <iostream>

class Pizza{
    public:
    std::string topping1;
    std::string topping2;
    Pizza(std::string topping1){
        this->topping1= topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};
int main(){
    Pizza pizza1("Mushrooms");
    std::cout << "Pizza1 topping1: " << pizza1.topping1 << '\n';
    Pizza pizza2("Mushrooms", "Pepperoni");
    std::cout << "Pizza2 topping1: " << pizza2.topping1 << '\n';
    std::cout << "Pizza2 topping2: " << pizza2.topping2 << '\n';
    return 0;
}