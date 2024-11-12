/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:17:19 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/12 14:45:18 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <cstring>

class Harl{
    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level );
    
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
    
};

typedef void (Harl::*ptrToFunc)( void );

#endif