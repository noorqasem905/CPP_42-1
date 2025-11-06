/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqasem <nqasem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:01:59 by aatieh            #+#    #+#             */
/*   Updated: 2025/11/05 18:59:11 by nqasem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap robot1("K9");
	ClapTrap robot2("6-XE");

	robot1.attack("6-XE");
	robot2.takeDamage(2);
	robot2.beRepaired(2);
	robot2.attack("K9");
	robot1.takeDamage(2);
	robot1.beRepaired(2);
	robot1.beRepaired(2);
	robot1.takeDamage(12);
	robot1.takeDamage(2);

	return 0;
}
