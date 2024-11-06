#include <Zombie.hpp>
#include <zombieHorde.hpp>

int main(){
    Zombie *horde = zombieHorde( 5, "z" );

    for ( int i = 0; i < 5; i++)
        horde[i].announce();
    //for ( int i = 0; i < 5; i++)
    delete [] horde;
    
    return ( 0 );
}