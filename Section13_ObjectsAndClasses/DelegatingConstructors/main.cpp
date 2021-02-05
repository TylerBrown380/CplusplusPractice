#include <iostream>
#include <string>
class Player{
private:std::string name;
    int health;
    int xp;
public:
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
};


Player::Player() : Player("None",0,0) {
    std::cout << "No args constructor" << std::endl;
}

Player::Player(std::string name) : Player(name,0,0){
    std::cout << "1 args constructor" << std::endl;
}

Player::Player(std::string name, int health, int xp) : name(name), health{health}, xp{xp}{
    std::cout << "3 args constructor" << std::endl;
}

int main() {
    Player empty;
    Player Tyler{"Tyler"};
    Player Brook{"Brook",100,50};
    return 0;
}
