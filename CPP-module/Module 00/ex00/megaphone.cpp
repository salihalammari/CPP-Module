/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:43:39 by slammari          #+#    #+#             */
/*   Updated: 2022/07/21 18:14:09 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main(int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac ; i++)
        {
            for (int j = 0; i < av[i][j]; j++)
            {
                std::cout << (char)std::toupper(av[i][j]);
            }
        std::cout << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}
