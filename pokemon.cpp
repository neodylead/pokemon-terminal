#include "pokemon.hpp"
#include "type.hpp"
#include "move.hpp"
#include <string>
#include <iostream>

// Constructor
Pokemon::Pokemon(int id, std::string name, int level)
{
    this->id = id;
    this->name = name;
    this->level = level;

    exp = 0;
    hp = 0;

    maxHp = 0;
    attack = 0;
    defense = 0;
    special = 0;
    speed = 0;


    nature = "";
    ability = "";
}

// Getters
std::string Pokemon::get_name() const{

    return name;

}


int Pokemon::get_id() const
{
    return id;
}

int Pokemon::get_level() const
{
    return level;
}

int Pokemon::get_exp() const
{
    return exp;
}

int Pokemon::get_hp() const
{
    return hp;
}

int Pokemon::get_maxHp() const
{
    return maxHp;
}

int Pokemon::get_attack() const
{
    return attack;
}

int Pokemon::get_defense() const
{
    return defense;
}

int Pokemon::get_special() const
{
    return special;
}

int Pokemon::get_speed() const
{
    return speed;
}

std::string Pokemon::get_nature() const
{
    return nature;
}

std::string Pokemon::get_ability() const
{
    return ability;
}

// Setters

void Pokemon::set_name(std::string new_name)
{
    name = new_name;
}

void Pokemon::set_level(int new_level)
{
    level = new_level;
}

void Pokemon::set_exp(int new_exp)
{
    exp = new_exp;
}

// Battle-related functions

void Pokemon::take_damage(int damage)
{
    hp -= damage;

    if (hp < 0)
    {
        hp = 0;
    }
}

void Pokemon::heal(int amount)
{
    hp += amount;

    if (hp > maxHp)
    {
        hp = maxHp;
    }
}

void Pokemon::gain_exp(int amount)
{
    exp += amount;
}

void Pokemon::level_up()
{
    level++;
}

// Moves

void Pokemon::add_move(Move move_to_add)
{
    moves.push_back(move_to_add);
}

void Pokemon::list_moves() const
{
    for (const Move& move : moves)
    {
        std::cout << move.get_name() << std::endl;
    }
}