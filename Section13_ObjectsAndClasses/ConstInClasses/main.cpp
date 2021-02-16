#include <iostream>
#include <string>

class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() const {
        return name;
    }
    void set_name(std::string name_val) {
        name = name_val;
    }
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health, int xp);
};

Player::Player() : Player {"None",0,0}{
}
Player::Player(std::string name) : Player {name,0,0}{
}
Player::Player(std::string name,int hp,int xp) : name{name}, health{hp}, xp{xp}{
}
void display_player_name(const Player &p){
    std::cout << p.get_name() << std::endl;
}

int main() {
    const Player hero{"Hero",200,60};


    Player villain {"Villain", 100, 55};
    std::cout << hero.get_name() << std::endl;

    return 0;
}
