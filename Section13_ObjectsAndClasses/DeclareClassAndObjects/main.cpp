#include <iostream>
#include <string>
#include <vector>


class Player {
    //attributes
    std::string name {"Player"};
    int health {100};
    int xp {5};

    //methods
    void talk(std::string);
    bool is_dead();
};

class Account {
    std::string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};
int main() {
    Account tyler_account;
    Account brook_account;
    Player tyler;
    Player brook;
    Player players[] {tyler, brook};

    std::vector<Player> player_vec{tyler};
    player_vec.push_back(brook);

    Player *enemy{new Player};

    delete enemy;
    return 0;
}



