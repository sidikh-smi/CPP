/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:30:38 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/24 04:46:28 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        Brain(const Brain& s);
        Brain &operator = (const Brain& src);
        ~Brain();
        void getbrain() const;
};

#endif