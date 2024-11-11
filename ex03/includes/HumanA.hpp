/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:27:52 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:31:26 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <Weapon.hpp> 

class HumanA{
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );
        void attack( void );
        
    private:
        std::string _name;
        Weapon &_weapon;
        
};

#endif