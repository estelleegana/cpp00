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
	std::string input;

	//std::cout << "------- entree dans add ----------" << std::endl;
	//std::cout << "nb de contacts : " << _nbcontact << std::endl;
	if (_nbcontact < 8)
	{
		_contact[_nbcontact].enregistrercontact(_nbcontact);
		_nbcontact++;
	}
	else
	{
		std::cout << "confirm replacing oldest contact [yes/no]?";
		getline(std::cin, input);
		if (input == "yes")
		{
			std::cout << "enregistrercontact en ecrasant le dernier [1]" << std::endl;
			_contact[0].enregistrercontact(_nbcontact);
		}
		else
			return;
	}
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
		if (atoi(input.c_str()) > _nbcontact || atoi(input.c_str()) < 1)
			std::cout << "\033[31minvalid index: \033[0m" << input << std::endl;
		else
			_contact[atoi(input.c_str()) - 1].displaycontact();
	}
	else
		std::cout << "[empty phonebook]" << std::endl;
}
