//
// Created by Admin on 2/16/2021.
//

#ifndef STATICCLASSMEMBERS_PLAYER_H
#define STATICCLASSMEMBERS_PLAYER_H
#include <string>

class Player {
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name() {return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name = "None", int health_val = 0, int xp_val = 0);
    Player(const Player &source);
    ~Player();

    static int get_num_players();
};


#endif //STATICCLASSMEMBERS_PLAYER_H
