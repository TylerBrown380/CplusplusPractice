#include <iostream>
#include <string>

class Player{
private:
    std::string name;
    int health;
    int xp;
public:
    void set_name(std::string s){name =s;}

    //Overloaded Constructors
    Player() {
        std::cout << "No args constructor called" << std::endl;
    }
    Player(std::string s) {
        set_name(s);
        std::cout << "String arg constructor called" << std::endl;
    }
    Player(std::string s, int health, int xp) {
        set_name(s);
        health = health;
        xp = xp;
        std::cout << "3 arg constructor called" << std::endl;
    }
    //Deconstruct
    ~Player(){
        std::cout << "Destructor called for " << name << std::endl;
    }
};
int main() {
    {
        Player bob;
        bob.set_name("bob");
    }

    Player p1;
    Player p2{"Jeff"};
    Player p3{"Tyler", 500,20};


    Player *enemy = new Player;
    enemy->set_name("Enemy");
    delete enemy;
    return 0;
}
