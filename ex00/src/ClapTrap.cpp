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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap Default Constructor" << std::endl;
    this->_name = name;
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_atack_damage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original) {
	std::cout << "ClapTrap Copy Constructor" << std::endl;
    this->_name = original._name;
    this->_hit_points = original._hit_points;
    this->_energy_points = original._energy_points;
    this->_atack_damage = original._atack_damage;
}

ClapTrap&ClapTrap::operator=(const ClapTrap &original) {
    std::cout << "ClapTrap Assignment Constructor" << std::endl;
    if (this != &original) {
        this->_name = original._name;
        this->_hit_points = original._hit_points;
        this->_energy_points = original._energy_points;
        this->_atack_damage = original._atack_damage;
    }
    return (*this);
}

void	ClapTrap::attack(const std::string &target) {
    if (this->_hit_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    if (this->_energy_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " has not enough energy points." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << " attack " << target;
    std::cout << ", causing " << this->_atack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hit_points > int(amount)) {
        this->_hit_points -= amount;
        std::cout << "ClapTrap " << this->_name << " take damage " << amount << std::endl;
    }
    else {
        this->_hit_points = 0;
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    }
}

void	ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    if (this->_energy_points <= 0) {
        std::cout << "ClapTrap " << this->_name << " has not enough energy points." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->_name << " be repaired " << amount << std::endl;
}
