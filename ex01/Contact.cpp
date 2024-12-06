#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Constructeur called - Contact" << std::endl;
	return;
}

Contact::~Contact(){
	std::cout << "Destructeur called - Contact" << std::endl;
	return;
}

//void Contact::createcontact(std::string )
