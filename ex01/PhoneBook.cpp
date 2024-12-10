#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nbcontact(0)
{
	std::cout << "Constructeur called - PhoneBook" << std::endl;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructeur called - PhoneBook" << std::endl;
	return;
}

void PhoneBook::add()
{
	//std::cout << "------- entree dans add ----------" << std::endl;
	//std::cout << "nb de contacts : " << _nbcontact << std::endl;
	_contact[_nbcontact].enregistrercontact(_nbcontact);
	_nbcontact++;
}

void PhoneBook::search()
{
	std::string input;

	if (_nbcontact > 0)
	{
		std::cout << "enter contact id u wanna display :" << std::endl;
		for (int i = 0; i < _nbcontact; i++)
			_contact[i].listecomplete();
		getline(std::cin, input);
		//std::cout << "index du contact demande : " << input << std::endl;
		_contact[atoi(input.c_str()) - 1].displaycontact();
	}
	else
		std::cout << "empty phonebook" << std::endl;
}
