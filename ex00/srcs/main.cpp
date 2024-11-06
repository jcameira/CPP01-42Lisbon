#include <Zombie.hpp>
#include <newZombie.hpp>
#include <randomChump.hpp>

int	main( void ){
	Zombie z1("z1");
	Zombie *z2 = newZombie("z2");

	z1.announce();
	z2->announce();
	randomChump("z3");

	delete z2;
	return (0);
}