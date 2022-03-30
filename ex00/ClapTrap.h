#pragma once

#include <string>
#include <iostream>

/* ClapTrap class */

class ClapTrap {
	std::string		name;
	unsigned int	hit;
	unsigned int	energy;
	unsigned int	damage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap&	operator=(const ClapTrap& other);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	~ClapTrap(void);
};