/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:19 by estegana          #+#    #+#             */
/*   Updated: 2024/12/06 14:56:29 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact {
private:
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _number;
	std::string _darkestsecret;

public:
	Contact();//constructeur
	~Contact();//destructeur

//getters
	std::string getfirstname() const;
	std::string getlastname() const;
	std::string getnickname() const;
	std::string getnumber() const;
	std::string getdarkestsecret() const;

//setters
	//pas d'utilite puisque pas besoin de recup les attributs pour les modifier
};

#endif
