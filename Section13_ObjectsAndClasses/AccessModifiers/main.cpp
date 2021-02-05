#include <iostream>
#include <string>
#include <vector>


class Player {
private:
    std::string name;
    int health;
    int xp;
public:
    //methods
    void talk(std::string s) {std::cout << name << " says " << s << std::endl;}
    bool is_dead();
    void setName(std::string s){name =s;}
    std::string getName(){return name;}
};

int main() {
    Player p1;
    p1.setName("Tyler");
    std::cout << p1.getName();
    return 0;
}
