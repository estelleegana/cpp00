/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:23 by estegana          #+#    #+#             */
/*   Updated: 2024/12/06 14:39:48 by estegana         ###   ########.fr       */
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
	void displaycontact(void) const;

public:
	PhoneBook(void);//constructeur
	~PhoneBook(void);//destructeur

	void add();
	void search();
};

#endif
