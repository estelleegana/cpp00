/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:16 by estegana          #+#    #+#             */
/*   Updated: 2024/11/30 13:17:06 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string input;
	while (true)
	{
		std::cin >> input;
		if (parsing(input))
			std::cout << "parsing stdin ok: " << input << std::endl;
		else
			std::cout << "enter valid command ; ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}

