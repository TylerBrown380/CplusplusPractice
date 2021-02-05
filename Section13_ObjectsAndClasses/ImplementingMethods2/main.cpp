#include <iostream>
#include "Account.h"

int main() {
    Account tyler_account;
    tyler_account.set_name("Tylers account");
    tyler_account.set_balance(10000.0);

    if(tyler_account.withdraw(500.0)){
        std::cout << "Withdral OK" << std::endl;
    } else {std::cout << "Not enough Money" << std::endl;}
    return 0;
}
