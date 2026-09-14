#include "player.hpp"
#include "pokemon.hpp"
#include <vector>
#include <string>

Player::Player()
{
    player_id = 0;
    player_name = "";
    player_party = {};
    money = 0;
    pc = {};
}

// Getters
int Player::get_player_id() const
{
    return player_id;
}

std::string Player::get_player_name() const
{
    return player_name;
}

std::vector<Pokemon> Player::get_player_party() const
{
    return player_party;
}

int Player::get_money() const
{
    return money;
}

std::vector<Pokemon> Player::get_pc() const
{
    return pc;
}


// Setters

void Player::modify_party(int action, Pokemon pokemon)
{
    if (action == 1)
    {

    }

    else
    {
        player_party.push_back(pokemon);
    }
}

void Player::modify_items(int action, std::string)
{}

void Player::modify_money(int action, int amount)
{}

void Player::modify_pc(int action, Pokemon pokemon)
{}

