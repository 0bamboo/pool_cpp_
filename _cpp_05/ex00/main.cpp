/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 16:28:19 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
    std::string test1 = "test 1";
    std::string test2 = "test 2";
    unsigned int t1 = 140;
    unsigned int t2 = 1;
	try
    {
        Bureaucrat test_1(test1, t1);
        std::cout << test_1 ;

        Bureaucrat test_2(test2, t2);
        std::cout << test_2 ;

        // error of incrementing the grade
        test_2.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << R << "Catch of main : \n";
        std::cout << e.what() << DEF;
    }
    std::cout << "Done ! \n";
    
    return 0;
}