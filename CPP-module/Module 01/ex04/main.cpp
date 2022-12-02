/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:38:15 by slammari          #+#    #+#             */
/*   Updated: 2022/12/02 20:38:08 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


void replace(std::string namefile, std::fstream &file, std::string s1, std::string s2)
{
    namefile += ".replace";
    std::ofstream newfile(namefile);
    std::string line;
    size_t j;
    size_t i;
    
    while(getline(file, line))
    {
        std::string str = "";
        int pos = 0;
        for(i = 0; line[i] ; i++)
        {
            for(j = 0;  j < s1.length() && line[i + j] == s1[j]; j++);
            if (s1 != "" && j == s1.length())
            {
                str += line.substr(pos, i - pos) + s2;
                pos = i + j;
                i += j - 1;
            }
            else
            {
                str += line.substr(i, 1);
                pos++;
            }
        }
        newfile << str << std::endl;
    }
}

int main(int ac, char **av)
{
    std::fstream file;
    if (ac == 4)
    {
        file.open(av[1]);
        if (!file)
        {
            std::cout << "File does't opened!" << std::endl;   
            return (1);
        }
        replace(av[1], file, av[2], av[3]);
    }
    return(0);
}
