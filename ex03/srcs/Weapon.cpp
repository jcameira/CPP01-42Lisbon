/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:52:38 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:20:25 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon( void ){
}

Weapon::Weapon( std::string type ){
    this->_type = type;
}

Weapon::~Weapon( void ){
}

std::string const &Weapon::getType( void ) const{
    return (this->_type);
}

void Weapon::setType( std::string type ){
    this->_type = type;
}