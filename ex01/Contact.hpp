/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:34:19 by estegana          #+#    #+#             */
/*   Updated: 2024/12/04 19:21:03 by estegana         ###   ########.fr       */
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
	void setfirstname(const std::string& firstname);
	void setlastname(const std::string& lastname);
	void setnickname(const std::string& nickname);
	void setnumber(const std::string& number);
	void setdarkestsecret(const std::string& darkestsecret);
};

#endif
