#ifndef BATTLE_HPP
#define BATTLE_HPP

#include "move.hpp" 
#include "pokemon.hpp"


class Battle
{

private:

    Pokemon& player;
    Pokemon& enemy;

public:

    Battle(Pokemon& player, Pokemon& enemy);


    void start();

    void player_turn();

    void use_move(Move used_move);

    void enemy_turn();

    void calculate_damage();

    bool check_faint();

};



#endif