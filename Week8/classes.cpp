#include <iostream>
#include <string>

enum class CharacterClass {Warrior, Mage, Archer, Rouge};

struct Character {

    std::string name;
    CharacterClass type;
    int health;
    float strenth;
};


std::string classToString(CharacterClass type) {
    switch(type){
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage:    return "Mage";
        case CharacterClass::Archer:  return "Archer";
        case CharacterClass::Rouge:   return "Rouge";
        default:                      return "Unknown";
    }



}

int main() {

    Character characters[4](
        {"Aragorn", CharacterClass::Warrior, 100, 90.5f},
        {"Gandalf", CharacterClass::Mage, 120, 75.0f},
        {"Legolas", CharacterClass::Archer, 85, 80.0f},
        {"Frodo", CharacterClass::Rouge, 80, 60.0f}
    );


for (int i = 0; i < 4; i++) {
    std::cout << "Name: " << characters[i].name << ", Type: " << classToString(characters[i].type) << ", Health: " << 
    characters[i].health << ", Strenth " << characters[i].strenth << std::endl;
}


int totalHP = 0;
for (int i = 0; i < 4; i++){
    totalHP += characters[i].health;
}

float avgHP = static_cast<float>(totalHP) / 4.0f;

std::cout << "\n The average health of this party is " << avgHP << std::endl;

    return 0;
}