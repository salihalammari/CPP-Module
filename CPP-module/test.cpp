/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slammari <slammari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 19:01:45 by slammari          #+#    #+#             */
/*   Updated: 2022/11/21 22:49:35 by slammari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  // header 
 
// int main(void)
// {
//     std::string    buff;
//     buff = "hello";
//     std::cout << buff << std::endl;
//     std::cout << "hello world !" << std::endl;
    
//     std::cout << "input a mord: ";
//     getline(std::cin, buff);
//     std::cout << "you entered: [" << buff << "]" << std::endl;
//      return 0; 
// }


// int main() // main function 
// {
//     std::cout << "Enter two number:" << std::endl;
//     int n1 = 0, n2 = 0;
//     std::cin >> n1 >> n2 ;
//     std::cout << "The sum of " << n1 << " and " << n2 
//     << " is " << n1 + n2 << std::endl;
//     return 0;
// }/* just learn */

using namespace std;
class test {
    public:
        test() {
            cout << "test default constructor\n";
        }
        test(int i) {
            cout << "test int constructor\n";
        }
        ~test() {
            cout << "test destructor\n";
        }
};

int main () {
    
    {
        test obj(10);
        
    }
    cout << "here\n";

}