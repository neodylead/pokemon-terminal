#ifndef MOVE_HPP
#define MOVE_HPP

#include <string>
#include "type.hpp"

class Move {

    private:

        int id;

        std::string name;

        Type type;

        int power;

        int accuracy;

        bool special;


    public:

        Move(int id, std::string name, int power);

        std::string get_name();
};






#endif