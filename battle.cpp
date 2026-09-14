#include "pokemon.hpp"
#include "move.hpp"
#include "menu.hpp"
#include "battle.hpp"
#include <iostream>

Menu battle_menu;


Battle::Battle(Pokemon& player, Pokemon& enemy) : player(player), enemy(enemy)
{

}


void Battle::start()
{
    battle_menu.battle_menu_start(player, enemy, true);
}

void Battle::player_turn()
{
    int battle_choice = battle_menu.battle_menu();

    switch (battle_choice)
    {
    case 0:
        system("clear");
        battle_menu.moves_list(player.get_moves());
        // int move_choice = battle_menu.int_input();
        break;
    
    case 1:
        system("clear");
        std::cout << "Items!" << std::endl;
        break;

    case 2:
        system("clear");
        std::cout << "Pokemon!" << std::endl;
        break;

    case 3:
        system("clear");
        std::cout << "You ran away safely!" << std::endl;
        break;


    default:
        system("clear");
        std::cout << "Invalid input!" << std::endl;
        break;
    }
}

void Battle::use_move(Move move)
{

}

void Battle::enemy_turn()
{

}

void Battle::calculate_damage()
{

}

bool Battle::check_faint()
{
    return true;
}