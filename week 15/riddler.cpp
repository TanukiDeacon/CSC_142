#include<iostream>
#include <tuple>
#include <string>

std::tuple<int, std::string, bool> getRiddleInfo() {
    return std::make_tuple(7, "What has roots as nobody sees, is taller than trees...", true);
}

int main(){

    int riddleNumber;
    std::string riddle;
    bool solved;

    std::tie(riddleNumber, riddle, solved) = getRiddleInfo();

    std::cout << "Riddle #" << riddleNumber << ": \"" << riddle << "\"\n";
    std::cout << "Solved: " << (solved ? "Yes" : "No") << "\n";


    return 0;
}