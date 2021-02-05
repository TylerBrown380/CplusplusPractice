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


Player::Player() : name("None"), health{0}, xp{0} {

}

Player::Player(std::string name) : name(name), health{0}, xp{0}{

}

Player::Player(std::string name, int health, int xp) : name(name), health{health}, xp{xp}{

}

int main() {
    Player empty;
    Player Tyler{"Tyler"};
    Player Brook{"Brook",100,50};
    return 0;
}
