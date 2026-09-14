#include "menu.hpp"
#include "pokemon.hpp"
#include <iostream>
#include <vector>
#include <thread>


int Menu::int_input()
{
    std::cout << "> ";
    int player_input;

    std::cin >> player_input;

    return player_input;
}

void Menu::list_reader(std::vector<std::string> list) const 
{
    for (int i = 0; i < list.size(); i++)
    {
        std::cout << "[" << i << "] " << list[i] << std::endl;
    }
}




int Menu::main_menu(std::vector<std::string> list) 
{

    for (int i = 0; i < 25; i++)
    {
        std::cout << '='; 
    }

    std::cout << std::endl << "Pokemon Terminal" << std::endl;

    for (int i = 0; i < 25; i++)
    {
        std::cout << '='; 
    }

    std::cout << std::endl;

    list_reader(list);

    int main_input = int_input();

    return main_input;
}

void Menu::pokemon_menu(const Pokemon& pokemon) 
{
    for (int i = 0; i < pokemon.get_name().length() + 8; i++){

        std::cout << '='; 
    }

    std::cout << std::endl << pokemon.get_name() << std::endl;

    for (int i = 0; i < pokemon.get_name().length(); i++){

        std::cout << '='; 
    }

    std::cout << std::endl;

    std::cout 
    << "Health: " << pokemon.get_maxHp() << std::endl
    << "Attack: " << pokemon.get_attack() << std::endl
    << "Defense: " << pokemon.get_defense() << std::endl
    << "Special: " << pokemon.get_special() << std::endl
    << "Speed: " << pokemon.get_speed() << std::endl;


    for (int i = 0; i < pokemon.get_name().length(); i++){

        std::cout << '='; 
    }

    std::cout << std::endl;

    pokemon.list_moves();

    for (int i = 0; i < pokemon.get_name().length() + 8; i++){

        std::cout << '='; 
    }

    std::cout << std::endl;

}


void Menu::battle_menu_start(Pokemon& player, Pokemon& enemy, bool is_wild)
{
    std::cout << "Battle started!" << std::endl;

    for (int i = 0; i < 25; i++)
    {
        std::cout << '='; 
    }

    std::cout << std::endl;

    if (is_wild)
    {
        std::cout << "A wild " << enemy.get_name() << " [Lv. " << enemy.get_level() << "] has appeared!" << std::endl;
    }

}


int Menu::battle_menu()
{
    for (int i = 0; i < 25; i++)
    {
        std::cout << '='; 
    }

    std::cout << std::endl;
    
    std::vector<std::string> list = {"Fight", "Item", "Pokemon", "Run"};
    list_reader(list);

    int battle_choice = int_input();

    return battle_choice;

}

void Menu::moves_list(std::vector<Move> list)
{
    for (int i = 0; i < 25; i++)
    {
        std::cout << '='; 
    }

    std::cout << std::endl;    

    for (int i = 0; i < list.size(); i++)
    {
        std::cout << "[" << i << "] " << list[i].get_name() << std::endl;
    }
}