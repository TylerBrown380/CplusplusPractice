#include <iostream>
#include <string>
#include <vector>


class Player {
public:
    //attributes
    std::string name {"Player"};
    int health {100};
    int xp {5};

    //methods
    void talk(std::string s) {std::cout << name << " says " << s << std::endl;}
    bool is_dead();
};

class Account {
public:
    std::string name;
    double balance;

    //methods
    bool deposit(double bal){balance +=bal; std::cout << "Depositing amount: " << bal<< std::endl;}
    bool withdraw(double bal){balance -= bal; std::cout << "Withdrawing amount: " << bal << std::endl;}
};
int main() {
    Account tyler_account;
    tyler_account.name = "Tyler's account";
    tyler_account.balance = 5000.0;
    tyler_account.deposit(500.0);
    std::cout << tyler_account.balance << std::endl;
    tyler_account.withdraw(8000.5);
    std::cout << tyler_account.balance << std::endl;

    Player player1;
    player1.name = "Tyler";
    player1.health = 1000;
    player1.xp = 100;
    player1.talk("Hello");

    Player *enemy {new Player};
    (*enemy).name = "Enemy";
    (*enemy).health = 20;
    enemy->xp = 15;
    enemy->talk("Sup kid");
    return 0;
}



