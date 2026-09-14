#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
#include <vector>
#include "pokemon.hpp"

class Player
{
    private:

        int player_id;
        std::string player_name;
        std::vector<Pokemon> player_party;
        int money;
        std::vector<std::string> items;
        std::vector<Pokemon> pc;

    public:

        Player();


        // Getters

        int get_player_id() const;
        std::string get_player_name() const;
        std::vector<Pokemon> get_player_party() const;
        int get_money() const;
        std::vector<std::string> get_items() const;
        std::vector<Pokemon> get_pc() const;

        // Setters
        void set_palyer_id();
        void set_player_name();

        // 0 for adding, 1 for removing pokemon/item
        void modify_party(int action, Pokemon pokemon);

        void modify_items(int action, std::string item);

        // 0 for increese, 1 for decreese
        void modify_money(int action, int amount);

        void modify_pc(int action, Pokemon pokemon);

};


#endif