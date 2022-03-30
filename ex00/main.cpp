#include <iostream>
#include "ClapTrap.h"	

int main(void) {
	ClapTrap ben("ben");
	ClapTrap bob(ben);

	bob.attack("UFO");
	bob.beRepaired(5);
	bob.takeDamage(5);
	bob.beRepaired(5);
	bob.takeDamage(10);
	bob.beRepaired(10);
	bob.attack("Gleb");
	return (0);
}