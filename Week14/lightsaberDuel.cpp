#include <iostream>
#include <cstdlib>
#include <ctime>

int rollAtk(){
    return rand() % 10 + 1;
}

int rollDef(){
    return rand() % 10 + 1;
}

bool isHit(int attack, int defense) {
    return attack > defense;
}

void duel() {
    int obiWins = 0;
    int darthWins = 0;

    for(int i = 1; i <=5; ++i){
        int attack = rollAtk();
        int defense = rollDef();

        std::cout << "Round " << i << ": Obi-Wan attacks with " << attack 
                                  << ", Maul defends with " << defense << " - ";

        if (isHit(attack, defense)){
            std::cout << "HIT" << std::endl;
            ++obiWins;
        }
        else {
            std::cout << "MISS" << std::endl;
            ++darthWins;
        }
                
    }

    std::cout << "\nObi-Wan wins " << obiWins << " rounds." << std::endl;
    std::cout << "Darth Maul wins " << darthWins << " rounds." << std::endl;

    if (obiWins > darthWins)
        std::cout << "Obi-Wan wins the duel!" << std::endl;
    else if (darthWins > obiWins)
        std::cout << "Darth Maul wins the duel!" << std::endl;
    else
        std::cout << "It's a tie!" << std::endl;


}


int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    duel();
    return 0;
}