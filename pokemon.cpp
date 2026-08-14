#include "pokemon.hpp"
#include "move.hpp"
#include <iostream>
#include <string>

Pokemon::Pokemon(int id, std::string name, int level)
{
    this->id = id;
    this->name = name;
    this->level = level;

}

std::string Pokemon::get_name(){

    return name;


}

void Pokemon::add_move(Move move_to_add){

    moves.push_back(move_to_add);


}

void Pokemon::list_moves(){

    for (int i = 0; i < moves.size(); i++) {

        std::cout << moves[i].get_name() << std::endl;


    }



}