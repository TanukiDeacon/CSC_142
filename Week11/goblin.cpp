#include <iostream>

class Goblin {

    public:
    Goblin() {
        std::cout << "A goblin has been spawned!" << std::endl;
    }

    ~Goblin() {
        std::cout << "The Goblin has died" << std::endl;
    }


};

int main() {

    {
        Goblin goblin;
    }

    return 0;
}