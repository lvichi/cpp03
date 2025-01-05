/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:04:07 by lvichi            #+#    #+#             */
/*   Updated: 2025/01/05 17:04:07 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class    FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap &original);
        FragTrap    &operator=(const FragTrap &original);
        void		attack(const std::string &target);
        void        highFivesGuys(void);
};
