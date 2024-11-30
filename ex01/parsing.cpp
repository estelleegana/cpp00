/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:53:38 by estegana          #+#    #+#             */
/*   Updated: 2024/11/30 13:16:46 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int parsing(std::string input)
{
	if (input == "ADD" || input == "SEARCH" || input == "EXIT")
		return 1;
	return 0;
}

