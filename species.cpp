#include "species.hpp"

// Constructor

Species::Species()
{
    id = 0;
    name = "";
    base_maxHp = 0;
    base_attack = 0;
    base_defense = 0;
    base_special = 0;
    base_speed = 0;

    type1 = Type::None;
    type2 = Type::None;

    height = 0;
    weight = 0;

    capture_rate = 0;
    exp_speed = "";
}

// Getters

std::string Species::get_name() const
{
    return name;
}

int Species::get_id() const
{
    return id;
}

int Species::get_base_maxHp() const
{
    return base_maxHp;
}

int Species::get_base_attack() const
{
    return base_attack;
}

int Species::get_base_defense() const
{
    return base_defense;
}

int Species::get_base_special() const
{
    return base_special;
}

int Species::get_base_speed() const
{
    return base_speed;
}

Type Species::get_type1() const
{
    return type1;
}

Type Species::get_type2() const
{
    return type2;
}

double Species::get_height() const
{
    return height;
}

double Species::get_weight() const
{
    return weight;
}

int Species::get_capture_rate() const
{
    return capture_rate;
}

std::string Species::get_exp_speed() const
{
    return exp_speed;
}

// Setters

void Species::set_id(int pokemon_id)
{
    id = pokemon_id;
}

void Species::set_name(std::string pokemon_name)
{
    name = pokemon_name;
}

void Species::set_base_maxHp(int new_base_maxHp)
{
    base_maxHp = new_base_maxHp;
}

void Species::set_base_attack(int new_base_attack)
{
    base_attack = new_base_attack;
}

void Species::set_base_defense(int new_base_defense)
{
    base_defense = new_base_defense;
}

void Species::set_base_special(int new_base_special)
{
    base_special = new_base_special;
}

void Species::set_base_speed(int new_base_speed)
{
    base_speed = new_base_speed;
}

void Species::set_type1(Type new_type1)
{
    type1 = new_type1;
}

void Species::set_type2(Type new_type2)
{
    type2 = new_type2;
}

void Species::set_height(double new_height)
{
    height = new_height;
}

void Species::set_weight(double new_weight)
{
    weight = new_weight;
}

void Species::set_capture_rate(int new_capture_rate)
{
    capture_rate = new_capture_rate;
}

void Species::set_exp_speed(std::string new_exp_speed)
{
    exp_speed = new_exp_speed;
}