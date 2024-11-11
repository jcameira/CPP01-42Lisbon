/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:00:55 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:34:45 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA( std::string name, Weapon &weapon ): _name( name ), _weapon( weapon ){
}

HumanA::~HumanA( void ){
}

void HumanA::attack( void ){
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}