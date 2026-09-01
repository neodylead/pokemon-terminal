#include "move.hpp"
#include <string>


Move::Move(int id, std::string name, int power){

    this->id = id;
    this->name = name;
    this->power = power;

}

std::string Move::get_name() const{

    return name;    

}

int Move::get_power() const{

    return power;

}

int Move::get_accuracy() const{

    return accuracy;

}

bool Move::is_special() const{

    return special;

}