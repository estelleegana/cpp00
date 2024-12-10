/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:19 by estegana          #+#    #+#             */
/*   Updated: 2024/12/10 18:30:22 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
private:
	int _i;
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _number;
	std::string _darkestsecret;

public:
	Contact();//constructeur
	~Contact();//destructeur

	void enregistrercontact(int i);
	void listecomplete();
	void displaycontact();
};

#endif
