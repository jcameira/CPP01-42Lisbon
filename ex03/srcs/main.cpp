/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:45:40 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:34:59 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <HumanB.hpp>

int main(){
    {
    Weapon club = Weapon( "crude spiked club" );
    HumanA bob( "Bob", club );
    bob.attack();
    club.setType( "some other type of club" );
    bob.attack();
    }
    {
    Weapon club = Weapon( "crude spiked club" );
    HumanB jim( "Jim" );
    jim.attack();
    jim.setWeapon(club);
    jim.attack();
    club.setType( "some other type of club" );
    jim.attack();
    }
    return ( 0 );
}