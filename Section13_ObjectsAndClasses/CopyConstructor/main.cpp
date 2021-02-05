#include <iostream>
#include <string>
class Player{
private:std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(std::string name = "None", int health = 0, int xp = 0);

    //Copy Constructor
    Player(const Player &s);
    //Destructor
    ~Player(){std::cout << "Destructor called: " << name << std::endl;}
};

Player::Player(std::string name, int health, int xp) : name(name), health{health}, xp{xp}{
    std::cout << "3 args constructor" << std::endl;
}

Player::Player(const Player &s) : name(s.name), health(s.health), xp(s.xp) {
    std::cout << "Copy constructor - made a copy of: " << s.name << std::endl;
}

void displayPlayer(Player p) {
    std::cout << "Name: " << p.get_name() << std::endl;
    std::cout << "Health: " << p.get_health() << std::endl;
    std::cout << "XP: " << p.get_xp() << std::endl;
}

int main() {
    Player empty;

    displayPlayer(empty);

    Player tyler{"Tyler"};
    displayPlayer(tyler);

    Player cat("Pounce", 100);
    displayPlayer(cat);

    Player brook{"Brook",100,50};
    displayPlayer(brook);
    return 0;
}
