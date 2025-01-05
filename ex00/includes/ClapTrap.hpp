/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:33:55 by lvichi            #+#    #+#             */
/*   Updated: 2024/12/27 23:17:27 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	ClapTrap{
	private:
    	std::string	_name;
    	int			_hit_points;
    	int			_energy_points;
    	int			_atack_damage;
    public:
    	ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &original);
        ClapTrap	&operator=(const ClapTrap &original);
    	void		attack(const std::string &target);
    	void		takeDamage(unsigned int amount);
    	void		beRepaired(unsigned int amount);
};
