#ifndef SPECIES_HPP
#define SPECIES_HPP

#include "type.hpp"
#include <string>

class Species {

    private:
        // Identity
        int id;
        std::string name;

        // Base stats
        int base_maxHp;
        int base_attack;
        int base_defense;
        int base_special;
        int base_speed;

        // Types
        Type type1;
        Type type2;

        // Size
        double height;
        double weight;

        // Progress
        int capture_rate;
        std::string exp_speed;

    public:
        // Constructor
        Species();

        // Getters
        std::string get_name() const;
        int get_id() const;

        int get_base_maxHp() const;
        int get_base_attack() const;
        int get_base_defense() const;
        int get_base_special() const;
        int get_base_speed() const;

        Type get_type1() const;
        Type get_type2() const;

        double get_height() const;
        double get_weight() const;

        int get_capture_rate() const;

        std::string get_exp_speed() const;

        // Setters

        void set_id(int pokemon_id);
        void set_name(std::string pokemon_name);
        void set_base_maxHp(int new_base_maxHp);
        void set_base_attack(int new_base_attack);
        void set_base_defense(int new_base_defe);
        void set_base_special(int new_base_special);
        void set_base_speed(int new_base_speed);

        void set_type1(Type new_type1);
        void set_type2(Type new_type2);
        void set_height(double new_height);
        void set_weight(double new_weight);

        void set_capture_rate(int new_capture_rate);
        void set_exp_speed(std::string new_exp_speed);

};

#endif