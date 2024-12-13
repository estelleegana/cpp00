/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:23 by estegana          #+#    #+#             */
/*   Updated: 2024/12/13 19:57:09 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook {
private:
	Contact _contact[8];
	int _nbcontact;
	int _oldest;

public:
	PhoneBook();//constructeur
	~PhoneBook();//destructeur

	void add();
	void search();
	void displayheader();
};

#endif
