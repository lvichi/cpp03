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

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_atack_damage = 20;

    std::cout << "ScavTrap Default Constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original) {
    std::cout << "ScavTrap Copy Constructor" << std::endl;
    this->_name = original._name;
    this->_hit_points = original._hit_points;
    this->_energy_points = original._energy_points;
    this->_atack_damage = original._atack_damage;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &original) {
    if (this != &original) {
        std::cout << "ScavTrap Assignment Constructor" << std::endl;
        this->_name = original._name;
        this->_hit_points = original._hit_points;
        this->_energy_points = original._energy_points;
        this->_atack_damage = original._atack_damage;
    }
    return (*this);
}

void	ScavTrap::attack(const std::string &target) {
    if (this->_hit_points <= 0) {
        std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    if (this->_energy_points <= 0) {
        std::cout << "ScavTrap " << this->_name << " has not enough energy points." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ScavTrap " << this->_name << " attack " << target;
    std::cout << ", causing " << this->_atack_damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
};
