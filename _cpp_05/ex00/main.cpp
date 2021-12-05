/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/05 18:40:51 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
    std::string test1 = "test 1";
    std::string test2 = "test 2";
    unsigned int t1 = 3;
    unsigned int t2 = 160;
	try
    {
        Bureaucrat test_1(test1, t1);
        std::cout << test_1 ;

        std::cout << "im here \n";
        
        Bureaucrat test_2(test2, t2);
        std::cout << test_2 ;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }
    
    return 0;
}