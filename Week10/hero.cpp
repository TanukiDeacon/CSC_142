#include <iostream>

void drinkPotion(int& hp, int healing) {
    hp += healing;
}

void takeDamage(int* hp, int damage){
    *hp-= damage;
}

int main() {
     
    int hp = 10;

    std::cout << "Hero HP: " << hp << std::endl;

    std::cout << "The Hero uses a potion ---- +5HP" << std::endl;
    drinkPotion(hp, 5);

    std::cout << "Hero HP: " << hp << std::endl;

    std::cout << "The Hero is ambushed by a goblin ---- -3HP" << std::endl;
    takeDamage(&hp, 3);
    
    std::cout << "Hero HP: " << hp << std::endl;




    return 0;
}