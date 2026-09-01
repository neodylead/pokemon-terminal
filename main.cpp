#include "pokemon.hpp"
#include "move.hpp"
#include "menu.hpp"
#include "species.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;


Type string_to_type(std::string type)
{
    if (type == "Normal") return Type::Normal;
    if (type == "Fire") return Type::Fire;
    if (type == "Water") return Type::Water;
    if (type == "Grass") return Type::Grass;
    if (type == "Electric") return Type::Electric;
    if (type == "Ice") return Type::Ice;
    if (type == "Fighting") return Type::Fighting;
    if (type == "Poison") return Type::Poison;
    if (type == "Ground") return Type::Ground;
    if (type == "Flying") return Type::Flying;
    if (type == "Psychic") return Type::Psychic;
    if (type == "Bug") return Type::Bug;
    if (type == "Rock") return Type::Rock;
    if (type == "Ghost") return Type::Ghost;
    if (type == "Dragon") return Type::Dragon;

    return Type::None;
}

Pokemon new_pokemon(const Species& species, int level)
{
    Pokemon p(
        species.get_id(),
        species.get_name(),
        level
    );

    p.heal(species.get_base_maxHp());

    return p;
}




int main(){

    Menu menu;


    vector<Species> pokedex;

    std::ifstream file("pokedex.csv");

    if (!file.is_open())
    {
        std::cout << "Failed to open file!" << std::endl;
        return 1;
    }

    std::cout << "File opened!" << std::endl;

    string line;

    getline(file, line);


    string cell;

    while (getline(file, line)) {

        stringstream ss(line);

        Species p;

        vector<string> data;


        while (getline(ss, cell, ',')) {

            // cout << cell << endl;
            data.push_back(cell);
            
        }

        p.set_id(stoi(data[0]));

        p.set_name(data[1]);

        p.set_base_maxHp(stoi(data[13]));

        p.set_base_attack(stoi(data[14]));

        p.set_base_defense(stoi(data[15]));

        p.set_base_special(stoi(data[16]));

        p.set_base_speed(stoi(data[17]));

        p.set_type1(string_to_type(data[3]));

        p.set_type2(string_to_type(data[4]));

        p.set_height(stod(data[5]));

        p.set_weight(stod(data[6]));

        p.set_capture_rate(stoi(data[9]));

        p.set_exp_speed(data[11]);

        pokedex.push_back(p);

    }

    cout << pokedex[150].get_name();

    Pokemon sparky = new_pokemon(pokedex[24], 5);


    menu.pokemon_menu(sparky);

}