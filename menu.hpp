#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>
#include "pokemon.hpp"

class Menu {


    public:

        int int_input();

        std::string string_input();

        void list_reader(std::vector<std::string> list) const;

        int main_menu(std::vector<std::string> list);

        void pokemon_menu(const Pokemon& pokemon);

        void battle_menu_start(Pokemon& player, Pokemon& enemy, bool is_wild);

        int battle_menu();

        void moves_list(std::vector<Move> list);


};

#endif