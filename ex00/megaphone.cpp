/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estegana <estegana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:28:09 by estegana          #+#    #+#             */
/*   Updated: 2024/11/29 09:06:50 by estegana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>//std::cout =standard character output <<
//std::endl= end line
#include <cctype>//toupper

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;//printf(LOUD TRUC TRUC)
	else
	{
		for (int i = 1; i < argc; i++)//pr i partant de 1 (argv[1]), tjs ds le nb d'argc, incrementant
		{
			char* argument = argv[i];//declaration de la variable a traiter (puis printf toupper)
			for (int j = 0; argument[j]; j++)//pr j partant de 0 (argv[i][0]), argv[i][j] != '\0', incremantant
				argument[j] = std::toupper(argument[j]);//variable = toupper(variable)
			std::cout << argument;//printf(%s, argument)
		}
		std::cout << std::endl;
	}
	return 0;
}


