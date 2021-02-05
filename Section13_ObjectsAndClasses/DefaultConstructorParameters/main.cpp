#include <iostream>
#include <string>
class Player{
private:std::string name;
    int health;
    int xp;
public:
    Player(std::string name = "None", int health = 0, int xp = 0);
};

Player::Player(std::string name, int health, int xp) : name(name), health{health}, xp{xp}{
    std::cout << "3 args constructor" << std::endl;
}

int main() {
    Player empty;
    Player tyler{"Tyler"};
    Player cat("Pounce", 100);
    Player brook{"Brook",100,50};
    return 0;
}
