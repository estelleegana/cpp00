/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:16 by estegana          #+#    #+#             */
/*   Updated: 2024/12/10 18:03:37 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;

	std::cout << std::endl;
	std::cout << "----------- \e[1mwelcome to MyPhoneBook\e[0m -----------" << std::endl;
	std::cout << "enter command ; ADD, SEARCH or EXIT" << std::endl;
	getline(std::cin, input);
	while (!std::cin.eof() && input != "EXIT")
	{

		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "\033[31minvalid command: \033[0m" << input << std::endl;
		std::cout << std::endl;
		std::cout << "enter command ; ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, input);
	}
	return 0;
}

