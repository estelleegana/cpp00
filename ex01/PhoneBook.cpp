#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Constructeur called - PhoneBook" << std::endl;

	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructeur called - PhoneBook" << std::endl;
	return;
}
//les constructeurs et destructeurs n'ont pas de type de retour

void PhoneBook::add()
{
	std::string str;

	printf("entree dans add\n");
	while (true)
	{
		getline(std::cin, str);
		std::cout << "str : " << str << std::endl;
	}
	//phonebook::contact[] = enregistrercontact()
	//enregistrercontact() > verifie que attributs sont bons
	//+ incrementer nb de contacts
}

void PhoneBook::search()
{
	printf("entree dans search\n");
}

void PhoneBook::displaycontact() const
{
	printf("entree dans displaycontact\n");
}
