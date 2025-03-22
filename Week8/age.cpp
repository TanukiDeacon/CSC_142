#include <iostream>
#include <string>

int main(){

    std::string name;
    int age;

    std::cout << "Name: ";
    std::cin >> name;

    std::cout << "Age in years: ";
    std::cin >> age;

    int ageInDays = age*365;

    std::cout << "Hello " << name << "!" << " You are " << ageInDays << " days old." << std::endl;





    return 0;
}
