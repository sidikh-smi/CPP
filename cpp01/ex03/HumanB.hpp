/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:20 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:21 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string name;
        Weapon* weaponB;
    public :
        void    attack();
        void    setWeapon(Weapon& w);
        HumanB(std::string s);
        ~HumanB();
};

#endif