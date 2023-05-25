/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:29:22 by skhaliff          #+#    #+#             */
/*   Updated: 2023/05/18 15:20:16 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    int i = 1;
    if (argc >= 2)
    {
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                std::cout << argv[i][j];
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
