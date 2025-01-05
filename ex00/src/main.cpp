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

int	main(void) {
    ClapTrap   godcat("GodCat");
    ClapTrap   godcat_copy("GodCat");
    ClapTrap   evilcat("EvilCat");
    ClapTrap   evilcat_copy(evilcat);
    int        i;

    godcat_copy = godcat;
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
    std::cout << "---EVIL WONS THE CATPOCALIPSE---" << std::endl;
    return 0;
}
