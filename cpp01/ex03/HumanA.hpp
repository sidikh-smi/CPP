/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:17 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:18 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
        std::string name;
        Weapon& weaponA;
    public :
        void    attack();
        HumanA(std::string n, Weapon& w) : name(n), weaponA(w){}
        ~HumanA();
};

#endif