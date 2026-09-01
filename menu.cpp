#include "menu.hpp"
#include "pokemon.hpp"
#include <iostream>

void Menu::main_menu(int length) const {

    for (int i = 0; i < length; i++){

        std::cout << '='; 
    }
    std::cout << std::endl;
}

void Menu::pokemon_menu(const Pokemon& pokemon) {

    for (int i = 0; i < pokemon.get_name().length() + 8; i++){

        std::cout << '='; 
    }

    std::cout << std::endl << pokemon.get_name() << std::endl;

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