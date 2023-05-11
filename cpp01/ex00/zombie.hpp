/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:15:04 by skhaliff          #+#    #+#             */
/*   Updated: 2023/04/28 15:03:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        void setname(std::string str);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif