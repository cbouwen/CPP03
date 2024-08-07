#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
    std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._hitPoints), _attackDamage(other._attackDamage)
{
    std::cout << "Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called!" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap &other)
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
            std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;      
        }
        else
            std::cout << "Claptrap " << _name << " has ran out of energy!" << std::endl;
    }
    else
        std::cout << "Claptrap " << _name << " has no more hitpoints left! He can't do anything.." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        if (static_cast<int>(amount) >= _hitPoints)
        {
            _hitPoints = 0;
            std::cout << "Claptrap " << _name << " takes " << amount << " points of damage!" << std::endl;
            std::cout << "Claptrap " << _name << " has no more hitpoints left and went down!" << std::endl;
        }
        else
        {
            _hitPoints -= amount;
            std::cout << "Claptrap " << _name << " takes " << amount << " points of damage!" << std::endl;      
        }
    }
    else
        std::cout << "Claptrap " << _name << " is already down.." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        if (_energyPoints > 0)
        {
            _energyPoints--;
            if (_hitPoints + amount > 10)
            {
                _hitPoints = 10;
                std::cout << "Claptrap" << _name << " is fully healed!";
            }
            else
            {
                _hitPoints += amount;
                std::cout << "Claptrap " << _name << " repaired himself for " << amount << " hitpoints!" << std::endl;
            }
        }
        else
            std::cout << "Claptrap " << _name << " has ran out of energy!" << std::endl;
    }
    else
        std::cout << "Claptrap " << _name << " has no more hitpoints left! He can't do anything.." << std::endl;
}