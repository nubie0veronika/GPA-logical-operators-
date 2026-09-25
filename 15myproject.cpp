//GPA
#include <iostream> 
int main() {
    int gpa;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;
    if(gpa > 2.7 && gpa < 4.0) {
        std::cout << "You are a good student!\n";
    }
    else if (gpa == 4.0) {
        std::cout << "You are an excellent student!\n";
    }
    else {
        std::cout << "You are a bad student!\n";
    }

    return 0;
}