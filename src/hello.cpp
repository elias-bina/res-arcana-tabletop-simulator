#include <iostream>
#include "environnement/env.h"

int main(int argc, char *argv[]) {
    std::cout << "My body is ready" << std::endl;
    Environnement env = Environnement(5);
    env.print_players();
    return 0;
}



