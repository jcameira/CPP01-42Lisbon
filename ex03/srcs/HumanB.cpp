/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:05:22 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:35:52 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

// HumanB::HumanB( void ){
// }

HumanB::HumanB( std::string name ){
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB( void ){
}

void HumanB::attack( void ){
    if (!this->_weapon)
        std::cout << this->_name << " throws hands" << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon &weapon ){
    this->_weapon = &weapon;
}