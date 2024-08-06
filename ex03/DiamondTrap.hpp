#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
{
    private:

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& other);
        ~DiamondTrap();

        DiamondTrap& operator=(const DiamondTrap& other);

        void    whoAmI();



};




#endif