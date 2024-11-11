/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:39:27 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:20:28 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Weapon{
    public:
        Weapon( void );
        Weapon( std::string type );
        ~Weapon( void );
        std::string const &getType( void ) const;
        void        setType( std::string type );

    private:
        std::string _type;
};

#endif