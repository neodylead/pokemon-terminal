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
        //constructor

        Move(int id, std::string name, int power);

        //getters

        std::string get_name() const;

        int get_power() const;

        int get_accuracy() const;

        bool is_special() const;

};






#endif