/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:47:55 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/12 16:32:48 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char **argv){
    Harl Karen;

    ( void )argc;
    if ( argc != 2 ){
		std::cout << ARGS_ERROR << std::endl;
        std::cout << USAGE << std::endl;
		return ( 1 );
	}
    Karen.complain( argv[1] );
}