/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:23 by estegana          #+#    #+#             */
/*   Updated: 2024/12/04 19:19:11 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook {
private:
	Contact _contact[8];
	int _contactcount;
	int _i;

public:
	PhoneBook(void);//constructeur
	~PhoneBook(void);//destructeur

	void add();
	void search();
};

#endif
