/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:21:20 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/12 14:47:42 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl( void ){
}

Harl::~Harl( void ){
}

void Harl::complain( std::string level ){
    const std::string   levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    const ptrToFunc functions[4] = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };
    int level_index = -1;

    for ( int i = 0; i < 4; i++ )
        if (!level.compare(levels[i]))
            level_index = i;
    if (level_index == -1)
        std::cout << "Harl has nothing to complain about" << std::endl;
    else
        (this->*functions[level_index])();
}

void Harl::_debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}