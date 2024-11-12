/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:44:30 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/12 16:35:12 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <utils.hpp>

std::string    replace_in_string(std::string line, char *to_replace, char *replacement)
{
	std::string	new_line;
	std::size_t	pos;

	while ( ( pos = line.find(to_replace) ) != std::string::npos ){
		new_line += line.substr(0, pos) + replacement;
		line = line.substr(pos + strlen(to_replace), line.length());
	}
	return ( new_line + line.substr(0, line.length()) );
}

int main(int argc, char **argv){
	std::string line;
	std::string file;
	std::ifstream infile;
	std::ofstream outfile;

	if ( argc != 4 ){
		std::cout << ARGS_ERROR << std::endl;
		std::cout << USAGE << std::endl;
		return ( 1 );
	}
	file = argv[1];
	infile.open( file.c_str() );
	if ( !infile.good() ){
		std::cout << IN_ERROR << file << std::endl;
		return ( 1 );
	}
	outfile.open( ( file + ".replace" ).c_str() );
	if ( !outfile.good() ){
		std::cout << OUT_ERROR << file + ".replace" << std::endl;
		infile.close();
		return ( 1 );
	}
	while ( std::getline( infile, line ) ){
		line = replace_in_string(line, argv[2], argv[3]);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}