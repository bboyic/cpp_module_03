#include "ClapTrap.h"

ClapTrap::ClapTrap(void) : name("no name"), hit(10), energy(10), damage(0) {
	std::cout << "Def Contructor is called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hit(10), energy(10), damage(0) {
	std::cout << "Contructor is called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit(other.hit), energy(other.energy), damage(other.damage) {
	std::cout << "Copy Contructor is called\n";
}

ClapTrap::~ClapTrap(void){
	std::cout << "destructor is called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	std::cout << "operator= is called\n";
	name = other.name;
	hit = other.hit;
	energy = other.energy;
	damage = other.damage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target){
	if (hit > 0)
		std::cout << "ClapTrap " + name + " attacks " + target + ", causing " << damage << " points of damage!\n";
	else
		std::cout << "Sorry, but " << name << " is dead\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (hit > 0) {
		hit -= amount;
		std::cout << "ClapTrap " + name + " take damage " << amount << std::endl;
	}
	else
		std::cout << name << " is dead\n";
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (hit > 0) {
		hit += amount;
		if (hit > 10)
			hit = 10;
		std::cout << "ClapTrap " + name + " has been repaired to " << amount << " points\n";
	}
	else
		std::cout << "Sorry, but " << name << " is dead\n";
}
