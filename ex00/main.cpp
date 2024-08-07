#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("Clappy");

    claptrap.attack("target1");
    claptrap.takeDamage(6);
    claptrap.beRepaired(2);

    claptrap.attack("target2");
    claptrap.takeDamage(4);
    claptrap.beRepaired(1);

    return 0;
}
