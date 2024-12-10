#include <iostream>
#include "Contact.hpp"

Contact::Contact() : _i(0)
{
	std::cout << "Constructeur called - Contact" << std::endl;
	return;
}

Contact::~Contact()
{
	std::cout << "Destructeur called - Contact" << std::endl;
	return;
}

void Contact::enregistrercontact(int i)
{
	std::string input;

	//std::cout << "------- entree dans _enregistrercontact -------" << std::endl;
	_i = i+1;

	std::cout << "type _firstname : ";
	getline(std::cin, input);
	_firstname = input;

	std::cout << "type _lastname : ";
	getline(std::cin, input);
	_lastname = input;

	std::cout << "type _nickname : ";
	getline(std::cin, input);
	_nickname = input;

	std::cout << "type _number : ";
	getline(std::cin, input);
	_number = input;//parser

	std::cout << "type _darkestsecret : ";
	getline(std::cin, input);
	_darkestsecret = input;

	std::cout << "\033[32mcontact added\033[0m" << std::endl;
}

void Contact::listecomplete()
{
	std::cout << "id : " << _i << " firstname : " << _firstname << std::endl;
}

void Contact::displaycontact()
{
	//std::cout << "------- entree dans _displaycontact -------" << std::endl;
	std::cout << "id : " << _i << std::endl;
	std::cout << "firstname : " << _firstname << std::endl;
	std::cout << "lastname : " << _lastname << std::endl;
	std::cout << "number : " << _number << std::endl;
	std::cout << "darkestsecret : " << _darkestsecret << std::endl;
}
