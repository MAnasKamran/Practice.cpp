#include <iostream>

class Student{
    public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    void printDetails(){
        std::cout << "Name: " << name << '\n';
        std::cout << "Age: " << age << '\n';
        std::cout << "GPA: " << gpa << "\n\n";
    }
};
int main(){
    Student student1("John Doe", 22, 3.77);
    student1.printDetails();

    Student student2("Alice", 21, 3.68);
    student2.printDetails();

    Student student3("Oliver", 23, 3.84);
    student3.printDetails();
    
    return 0;
}