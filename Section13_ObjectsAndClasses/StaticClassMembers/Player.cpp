//
// Created by Admin on 2/16/2021.
//

#include "Player.h"


int Player::num_players{0};
Player::Player(std::string name, int hp, int xp) : name{name}, health{hp}, xp{xp}{
    ++num_players;
}

Player::Player(const Player &source) : Player {source.name, source.health, source.xp}{

}

Player::~Player() {
    --num_players;
}

int Player::get_num_players() {
    return num_players;
}