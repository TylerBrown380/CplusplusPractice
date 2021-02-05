#include <iostream>
#include <string>

class Account {
private:
    std::string name;
    double balance;

public:
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}

    //methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(std::string n) {
    name = n;
}

std::string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance +=amount;
    return true;
}
bool Account::withdraw(double amount) {
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    } else {return false;}
}
int main() {
    Account tyler_account;
    tyler_account.set_name("Tyler's Account");
    tyler_account.set_balance(1000);

    if(tyler_account.deposit((200.0))){
        std::cout << "Deposit OK" << std::endl;
    } else {
        std::cout << "Deposit Not Allowed" << std::endl;
    }
    if(tyler_account.withdraw((500.0))){
        std::cout << "Withdrawal Successful" << std::endl;
    } else {
        std::cout << "Insufficient funds" << std::endl;
    }
    if(tyler_account.withdraw((2000.0))){
        std::cout << "Deposit OK" << std::endl;
    } else {
        std::cout << "Insufficient Funds" << std::endl;
    }
    return 0;
}
