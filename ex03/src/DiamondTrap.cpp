/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:33:55 by lvichi            #+#    #+#             */
/*   Updated: 2024/12/27 22:44:04 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
        ClapTrap(name + "_clap_name"),
        ScavTrap(name),
        FragTrap(name) {
    this->_name = name;
    this->_energy_points = 50;
    std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) :
        ClapTrap(original),
        ScavTrap(original),
        FragTrap(original) {
    std::cout << "DiamondTrap Copy Constructor" << std::endl;
    this->_name = original._name;
}

DiamondTrap    &DiamondTrap::operator=(const DiamondTrap &original) {
    if (this != &original) {
        ClapTrap::operator=(original);
        FragTrap::operator=(original);
        ScavTrap::operator=(original);
        std::cout << "DiamondTrap Assignment Constructor" << std::endl;
        this->_name = original._name;
    }
    return (*this);
}

void	DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap: " << this->_name << ", ClapTrap: " << ClapTrap::_name << std::endl;
}

void    DiamondTrap::printStats() {
    std::cout << "DiamondTrap: " << this->_name << std::endl;
    std::cout << "Hit Points: " << this->_hit_points << std::endl;
    std::cout << "Energy Points: " << this->_energy_points << std::endl;
    std::cout << "Attack Damage: " << this->_atack_damage << std::endl;
}