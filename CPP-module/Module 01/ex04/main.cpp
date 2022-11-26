/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 21:38:15 by slammari          #+#    #+#             */
/*   Updated: 2022/11/23 21:38:16 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replace(std::string s1, std::string s2, std::string line)
{
    int i;

    if (s1.empty() == true)
        return line;
    i = line.find(s1);
    while (i != std::string::npos)
    {
    	line.erase(i, s1.length());
        line.insert(i, s2);
        i = line.find(s1, i + s2.length());
    }
    return line;
}

int main(int ac, char **av)
{
    if (ac < 4)
    {
        std::cout << "you entred less than three arguments." << std::endl;
        return (1);
    }
    else if (ac > 4)
    {
        std::cout << "you entred more than three arguments." << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    std::ifstream infile;
    std::ofstream outfile;

    infile.open(filename, std::ios::in);
    if (infile.is_open() == true)
    {
        outfile.open(filename + ".replace", std::ios::out | std::ios::trunc);
        if (outfile.is_open() == true)
        {
            while (std::getline(infile, line))
            {
                line = my_replace(s1, s2, line);
                outfile << line << std::endl;
            }
            outfile.close();
        }
        else
        {
            std::perror("outfile error.");
            infile.close();
            return (1);
        }
        infile.close();
    }
    else
    {
        std::perror("infile error.");
        return (1);
    }
    return (0);
}