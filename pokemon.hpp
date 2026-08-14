#ifndef POKEMON_HPP
#define POKEMON_HPP


#include "move.hpp"
#include "type.hpp"
#include <vector>
#include <string>

class Pokemon {

    private:

        int id;

        std::string name;

        int level;

        int exp;

        int hp;

        int base_maxHp;

        int base_attack;

        int base_defense;

        int base_special;

        int base_speed;

        Type type1;

        Type type2;

        std::string nature;

        std::string ability;

        std::vector<Move> moves;

    public:

        Pokemon(

            int id,
            std::string name,
            int level

        );

        std::string get_name();

        void add_move(Move move_to_add);

        void list_moves();
};



#endif