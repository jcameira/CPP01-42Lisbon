#include <Zombie.hpp>

Zombie::Zombie( void ){
}

Zombie::Zombie( std::string name ): _name(name) {
}

Zombie::~Zombie( void ){
    std::cout << "Zombie " << this->_name << " destructor called" << std::endl;
}

void    Zombie::announce( void ){
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}