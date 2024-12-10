/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:23 by estegana          #+#    #+#             */
/*   Updated: 2024/12/10 17:17:59 by estegana         ###   ########.fr       */
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
	void _displaycontact(int i);


public:
	PhoneBook();//constructeur
	~PhoneBook();//destructeur

	void add();
	void search();

};

#endif
