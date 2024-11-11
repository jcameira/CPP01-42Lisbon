/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:27:04 by jcameira          #+#    #+#             */
/*   Updated: 2024/11/11 19:45:15 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void pass_by_pointer_change_value( std::string *str ){
	std::cout << "<==============Pass by pointer==============>" << std::endl;
	std::cout << "Memory address of str: " << str << std::endl;
	std::cout << "Value of the str: " << *str << std::endl;
	*str = "New pointer string";
	std::cout << "Memory address of str: " << str << std::endl;
	std::cout << "Value of the str: " << *str << std::endl;
}

void pass_by_reference_change_value( std::string &str ){
	std::cout << "<=============Pass by reference=============>" << std::endl;
	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	str = "New reference string";
	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
}

void pass_by_value_change_value( std::string str ){
	std::cout << "<===============Pass by value===============>" << std::endl;
	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	str = "New value string";
	std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
}

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

	std::cout << "<============Before any changes=============>" << std::endl;
    std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
	pass_by_value_change_value( str );
	std::cout << "<============After pass by value============>" << std::endl;
    std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
	pass_by_reference_change_value( stringREF );
	std::cout << "<==========After pass by reference==========>" << std::endl;
    std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
	pass_by_pointer_change_value( stringPTR );
	std::cout << "<===========After pass by pointer===========>" << std::endl;
    std::cout << "Memory address of str: " << &str << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the str: " << str << std::endl;
	std::cout << "Value of the stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the stringREF: " << stringREF << std::endl;
}