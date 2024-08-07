#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Default ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called!" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap &other)
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

void    ClapTrap::attack(const std::string& target)
{
    if ( _hitPoints > 0)
    {
        if (_energyPoints > 0)
        {
            _energyPoints--;
            std::cout << "Scavtrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;      
        }
        else
            std::cout << "Scavtrap " << _name << " has ran out of energy!" << std::endl;
    }
    else
        std::cout << "Scavtrap " << _name << " has no more hitpoints left! He can't do anything.." << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}