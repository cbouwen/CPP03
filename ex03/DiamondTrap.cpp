#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap ()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default DiamondTrap constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "DiamondTrap constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
    std::cout << "DiamondTrap copy constructor called!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called!" << std::endl;
}

DiamondTrap&   DiamondTrap::operator=(const DiamondTrap &other)
{
    if(this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

//Functions
void    DiamondTrap::highFivesGuys()
{
    std::cout << "DiamondTrap " << _name << " requests a high five! High five request is positive! High five commencing! High five succesful!" << std::endl;
}