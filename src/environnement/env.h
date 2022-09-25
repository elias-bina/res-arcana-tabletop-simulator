#include <iostream>
#include <vector>
#include <string>


class Environnement {
public:
    Environnement(int nb);
    void print_players();

protected:
    int nb_joueurs;
    std::vector<std::string> names;
};