/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:01:45 by slammari          #+#    #+#             */
/*   Updated: 2022/07/16 12:24:19 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string    buff;
    buff = "hello";
    std::cout << buff << std::endl;
    std::cout << "hello world !" << std::endl;
    
    std::cout << "input a mord: ";
    getline(std::cin, buff);
    std::cout << "you entered: [" << buff << "]" << std::endl;
     return 0; 
}

