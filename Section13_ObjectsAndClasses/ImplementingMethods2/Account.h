
#ifndef IMPLEMENTINGMETHODS2_ACCOUNT_H
#define IMPLEMENTINGMETHODS2_ACCOUNT_H
#include <string>
class Account{
private:
    std::string name;
    double balance;

public:
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}

    void set_name(std::string s);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};



#endif