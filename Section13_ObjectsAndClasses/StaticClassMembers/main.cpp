#include <iostream>
#include "Player.h"

void display_active_players() {
    std::cout << "active players: " << Player::get_num_players()<<std::endl;
}
int main() {
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    return 0;
}
