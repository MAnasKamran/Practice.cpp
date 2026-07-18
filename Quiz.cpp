#include <iostream>

int main(){

    std::string questions[] = {"Q1. What year was C++ created?",
                               "Q2. Who invented C++?",
                               "Q3. What is the predecessor of C++?",
                               "Q4. Which C++ keyword is used to permit a derived class to override a base class member function to achieve runtime polymorphism"};


    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 2000"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. override", "B. virtual", "C. static", "D. polymorph"}};

    
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    std::cout << "******************************\n";
    std::cout << "*           QUIZ             *\n";
    std::cout << "******************************\n\n";

    for(int i = 0; i < size; i++){
        std::cout << "******************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "\nAnswer: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!!\n\n";
            score++;
        }
        else{
            std::cout << "Wrong!\n";
            std::cout << "The correct answer was: " << answerKey[i] << "\n\n";
        }
    }

    std::cout << "You've completed the quiz!\n\n";
    std::cout << "******************************\n";
    std::cout << "*           RESULT           *\n";
    std::cout << "******************************\n";

    std::cout << "Total questions: " << size << '\n';
    std::cout << "Correct answers: " << score << '\n';
    std::cout << "Wrong answers: " << size - score << '\n';
    std::cout << "Score : " << score << "/" << size << '\n';
    std::cout << "Percentage: " << (score/(double)size) * 100 << "%" << '\n';


    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin.clear();
    std::cin.get();
    return 0;
}
