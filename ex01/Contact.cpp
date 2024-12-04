#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Contact Constructeur called" << std::endl;
	return;
}

Contact::~Contact(){
	std::cout << "Contact Destructeur called" << std::endl;
	return;
}
