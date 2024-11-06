#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>
#include <cstring>

class   Zombie {
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
        void    announce( void );
        void    setName( std::string name );

    private:
        std::string _name;
};

#endif