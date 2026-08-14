#include "pokemon.hpp"
#include "move.hpp"
#include <iostream>

using namespace std;

int main(){

    Pokemon pikachu(25, "Pikachu", 5);

    Move thunderbolt(1,"Thunderbolt", 70);

    Move quickattack(2, "Quick Attack", 20);

    pikachu.add_move(thunderbolt);
    pikachu.add_move(quickattack);

    cout << pikachu.get_name() << endl;

    pikachu.list_moves();


}