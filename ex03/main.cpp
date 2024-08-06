#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    ClapTrap    claptrap("Clappy");
    ScavTrap    scavtrap("Scavvy");
    FragTrap    fragtrap("Fraggy");

    claptrap.attack("target dummy");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);

    scavtrap.attack("target dummy");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(30);
    scavtrap.guardGate();

    fragtrap.attack("target dummy");
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(30);
    fragtrap.highFivesGuys();


    return 0;
}