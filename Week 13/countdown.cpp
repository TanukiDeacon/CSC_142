#include <iostream>

int main(){

    std::cout << "Countdown: " << std::endl;

    for (int i = 10; i >= 1; --i ){
        std::cout << i << "...\n";
    }
    
     std::cout << "Liftoff!" << std::endl;

    return 0;
}