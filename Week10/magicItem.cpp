#include <iostream>
#include <string>

class MagicItem {

    private:
    std::string name_;
    std::string elementalType_;
    int mana_;

    public:
        MagicItem(const std::string& name, const std::string& elementalType, int mana)
        : name_{name}, elementalType_{elementalType}, mana_{mana} 
        {
        std::cout << name_ << " (" << elementalType_ << " type) created with " << mana_ << " mana remaining!\n";
        }

    void use() {
        if (mana_ > 0 ){
            mana_ --;
            std::cout << name_ << " (" << elementalType_ << " type) used. Mana left: " << mana_ << "\n";
        }
        else {
            std::cout << name_ << " (" << elementalType_ << " type) used. no mana left. \n";
        }
    }


};

int main() {

    MagicItem wand{"Frostspire","Ice", 5};
    wand.use();
    wand.use();
    wand.use();
    wand.use();

    MagicItem sword{"Avernus", "Fire", 3};
    sword.use();
    sword.use();
    sword.use();
    sword.use();

    MagicItem amulet{"Petrashard", "Earth", 2};
    amulet.use();
    amulet.use();
}