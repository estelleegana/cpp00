#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook Constructeur called" << std::endl;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook Destructeur called" << std::endl;
	return;
}
//les constructeurs et destructeurs n'ont pas de type de retour

void PhoneBook::add()
{
	printf("add\n");
}

void PhoneBook::search()
{
	printf("search\n");
}
