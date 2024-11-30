#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructeur called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){
	std::cout << "Destructeur called" << std::endl;
	return;
}
//les constructeurs et destructeurs n'ont pas de type de retour
