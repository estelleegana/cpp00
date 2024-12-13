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
		std::cout << "confirm replacing oldest contact [yes/no]? ";
		getline(std::cin, input);
		if (input == "yes")
			_contact[_ol].enregistrercontact(_nbcontact);
		else
			return;
	}
}


//liste de 4 colonnes : index, first name, last name et nickname.
//Chaque colonne 10 caractères de long. séparées par un pipe |
//texte aligné à droite. Si texte > la largeur colonne, tronquer txt et
//remplacer le dernier caractère affiché par un point .
//Ensuite, programme demande l’utilisateur d’entrer l’index du contact à af-
//ficher
//Si l’index ou son format sont incorrects, gérez pertinente.
//Sinon, affichez les informations du contact, une par ligne.
void PhoneBook::search()
{
	std::string input;

	if (_nbcontact > 0)
	{
		displayheader();
		for (int i = 0; i < _nbcontact; i++)
			_contact[i].listecomplete();
		std::cout << std::endl;
		std::cout << "enter contact index u wanna display : ";
		getline(std::cin, input);
		if (atoi(input.c_str()) > _nbcontact || atoi(input.c_str()) < 1)
			std::cout << "\033[31minvalid index: \033[0m" << input << std::endl;
		else
			_contact[atoi(input.c_str()) - 1].displaycontact();
	}
	else
		std::cout << "[empty phonebook]" << std::endl;
}

void PhoneBook::displayheader()
{
	std::string tab[4] =
	{
		"index",
		"first name",
		"last name",
		"nickname",
	};
	std::cout << std::setw(10) << tab[0] << "|"
		<< std::setw(10) << tab[1] << "|"
		<< std::setw(10) << tab[2] << "|"
		<< std::setw(10) << tab[3] << std::endl;
}
