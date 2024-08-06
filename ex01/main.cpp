#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap    claptrap("Clappy");
    ScavTrap    scavtrap("Scavvy");

    claptrap.attack("target dummy");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);

    scavtrap.attack("target dummy");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(30);
    scavtrap.guardGate();

    return 0;
}
