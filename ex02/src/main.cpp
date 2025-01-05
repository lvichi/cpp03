/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:45:39 by lvichi            #+#    #+#             */
/*   Updated: 2024/12/04 18:45:39 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
    ClapTrap   godcat("GodCat");
    ClapTrap   evilcat("EvilCat");
    int        i;

    std::cout << "---START CATPOCALIPSE---" << std::endl;
    godcat.attack("EvilCat");
    evilcat.takeDamage(0);
    evilcat.attack("GodCat");
    godcat.takeDamage(0);
    godcat.beRepaired(1);
    for (i=10; i>0; i--)
        evilcat.beRepaired(1);
    evilcat.attack("GodCat");
    std::cout << "--GodCat got striked by a friendly lightning strike--" << std::endl;
    godcat.takeDamage(11);
    std::cout << "--From skys comes a new player--" << std::endl;

    ScavTrap    thorcat("ThorCat");

    thorcat.guardGate();
    thorcat.attack("EvilCat");
    evilcat.takeDamage(20);

    std::cout << "--Hell strikes back!!--" << std::endl;

    FragTrap    odincat("OdinCat");

    odincat.highFivesGuys();
    odincat.attack("ThorCat");
    thorcat.takeDamage(30);

    std::cout << "--Both Hell and Heaven agrees to end the catpocalipse--" << std::endl;

    return 0;
}
