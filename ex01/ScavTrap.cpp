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

void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0)
    {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;      
    }
    else
        std::cout << "ScavTrap " << _name << " has ran out of energy!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is in Gate keeper mode" << std::endl;
}