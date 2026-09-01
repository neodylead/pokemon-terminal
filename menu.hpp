#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include "pokemon.hpp"

class Menu {


    public:

        void main_menu(int length) const;

        void pokemon_menu(const Pokemon& pokemon);


};

#endif