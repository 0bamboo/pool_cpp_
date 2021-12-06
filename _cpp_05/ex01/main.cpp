/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 11:07:54 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::string test = "me ";
    unsigned int t = 22;
    Bureaucrat b1(test, t);
    Form f0("form 0 ", 10 ,150);
    Form f1("form 1 ", 1, 1);

    try
    {
    }
    catch(const std::exception& e)
    {
        std::cout << "catch of the main : "<< e.what() << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "form0 : " << f0 << std::endl;
    std::cout << "form1 : " << f1 << std::endl;
    return 0;
}