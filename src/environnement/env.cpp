
#include "env.h"

Environnement::Environnement(int nb_player){
    nb_joueurs = nb_player + 1;
}

void Environnement::print_players(){
    std::cout << "HEHE BOOOOOI :" << nb_joueurs << std::endl;
} 