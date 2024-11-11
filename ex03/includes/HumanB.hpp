/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:28:55 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:33:33 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <Weapon.hpp>

class HumanB{
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void attack( void );
        void setWeapon( Weapon &weapon );
        
    private:
        std::string _name;
        Weapon *_weapon;
        
};

#endif