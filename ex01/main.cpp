/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:16 by estegana          #+#    #+#             */
/*   Updated: 2024/12/04 20:40:40 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string input;

	while (true)
	{
		std::cout << std::endl;
		std::cout << "enter command ; ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT" || std::cin.eof())
			exit(0);
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "invalid command: " << input << std::endl;
	}
	return 0;
}

