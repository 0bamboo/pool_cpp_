/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 20:54:12 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main()
{
	try
    {
        Bureaucrat test_1("test 1", 1);
        std::cout << br1 << std::endl;

        Bureaucrat test_2("test 2", 150);
        std::cout << br3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}