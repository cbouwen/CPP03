#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string  _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        //Constructors
        ClapTrap();
        ClapTrap(std::string name);

        //Copy Constructor
        ClapTrap(const ClapTrap& other);

        //Destructor
        virtual ~ClapTrap();

        //Copy assignment operator
        ClapTrap& operator=(const ClapTrap& other);

        //Functions
        virtual void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

};

#endif