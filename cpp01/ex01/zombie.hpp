/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:14:56 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/11 12:14:57 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class zombie{
    private:
        std::string name;
    public:
        zombie();
        ~zombie();
        void setname(std::string name);
        void annonce();
};

zombie* zombieHorde( int N, std::string name );

#endif