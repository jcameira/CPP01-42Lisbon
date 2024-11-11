/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:44:30 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 21:23:31 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

void    replace_in_string(std::string *line, char *to_replace, char *replacement)
{
    
}

int main(int argc, char **argv){
    std::string line;
    std::string file = argv[1];
    std::ifstream infile;
    std::ofstream outfile;

    if (argc != 4){
        std::cout << "Wrong number of arguments" << std::endl;
        return ( 1 );
    }
    infile.open( file );
    outfile.open( file + ".replace" );
    while ( std::getline( infile, line ) ){
        replace_in_string(&line, argv[2], argv[3]);
    }
    infile.close();
    outfile.close();
}