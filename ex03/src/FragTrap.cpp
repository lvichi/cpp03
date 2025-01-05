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

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_atack_damage = 30;

    std::cout << "FragTrap Default Constructor" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original) {
    std::cout << "FragTrap Copy Constructor" << std::endl;
    this->_name = original._name;
    this->_hit_points = original._hit_points;
    this->_energy_points = original._energy_points;
    this->_atack_damage = original._atack_damage;
}

FragTrap    &FragTrap::operator=(const FragTrap &original) {
    if (this != &original) {
        std::cout << "FragTrap Assignment Constructor" << std::endl;
        this->_name = original._name;
        this->_hit_points = original._hit_points;
        this->_energy_points = original._energy_points;
        this->_atack_damage = original._atack_damage;
    }
    return (*this);
}

void	FragTrap::attack(const std::string &target) {
    if (this->_hit_points <= 0) {
        std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
        return;
    }
    if (this->_energy_points <= 0) {
        std::cout << "FragTrap " << this->_name << " has not enough energy points." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "FragTrap " << this->_name << " attack " << target;
    std::cout << ", causing " << this->_atack_damage << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << this->_name << " requests High fives from others cats!" << std::endl;
};
