#include <iostream>
#include <string>
#include <cctype>

int decodeChar(char letter) {
    return toupper(letter) - 'A' + 1;
}

int decodeChar(char letter, int bonus) {
    return decodeChar(letter) + bonus;
}

int decodeMessage(const std::string& message, int index = 0) {
    if (index >= message.size()) return 0;
    return decodeChar(message[index]) + decodeMessage(message, index + 1);
}

std::string yodaShift(const std::string& msg, int shift = 2) {
    std::string result;
    for (char c : msg) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}



int main(){
    std::cout << "Yoda decoding 'C': " << decodeChar('C') << "\n";
    std::cout << "With Force bonus + 5: " << decodeChar('C', 5) << "\n";
    std::cout << "Yoda message sum of 'ABC': " << decodeMessage("ABC") << "\n";
    std::cout << "Yoda shifted message: " << yodaShift("Help me Obi-Wan") << "\n";
    return 0;
}