#ifndef POKEMON_HPP
#define POKEMON_HPP

#include "move.hpp"
#include "type.hpp"
#include <string>
#include <vector>

class Pokemon
{
private:
    // Identity
    int id;
    std::string name;

    // Progression
    int level;
    int exp;

    // Current battle state
    int hp;

    // Individual stats
    int maxHp;
    int attack;
    int defense;
    int special;
    int speed;

    // Other information
    std::string nature;
    std::string ability;

    // Moves
    std::vector<Move> moves;

public:
    // Constructor
    Pokemon(int id, std::string name, int level);

    // Getters
    int get_id() const;
    std::string get_name() const;
    int get_level() const;
    int get_exp() const;
    int get_hp() const;

    int get_maxHp() const;
    int get_attack() const;
    int get_defense() const;
    int get_special() const;
    int get_speed() const;

    std::vector<Move> get_moves() const;

    std::string get_nature() const;
    std::string get_ability() const;

    // Stat Setters

    void set_maxHp(int amount);
    void set_attack(int amount);
    void set_defense(int amount);
    void set_special(int amount);
    void set_speed(int amount);

    // Controlled modification
    void set_name(std::string new_name);
    void set_level(int new_level);
    void set_exp(int new_exp);

    void take_damage(int damage);
    void heal(int amount);
    void gain_exp(int amount);
    void level_up();

    // Moves
    void add_move(Move move_to_add);
    void list_moves() const;
};

#endif