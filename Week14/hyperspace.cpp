#include <iostream>

void countdownToLaunch(int seconds){
    for (int i = seconds; i > 0; --i){
        std::cout << "Countdown to launch... " << i << std::endl;
    }
    std::cout << "Punch it Chewie!" << std::endl;
}

int main() {

    countdownToLaunch(5);
    return 0;
}