#include "move.hpp"
#include <string>


Move::Move(int id, std::string name, int power){

    this->id = id;
    this->name = name;
    this->power = power;

}

std::string Move::get_name(){

    return name;    


}