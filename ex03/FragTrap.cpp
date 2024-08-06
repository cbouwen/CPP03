#include "FragTrap.hpp"

FragTrap::FragTrap ()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called!" << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap &other)
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
void    FragTrap::highFivesGuys()
{
    std::cout << "Fragtrap " << _name << " requests a high five! High five request is positive! High five commencing! High five succesful!" << std::endl;
}