/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:11 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/06 22:27:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::string test = "SirBureaucrat";
    unsigned int t = 10;

    try
    {
        Bureaucrat b1(test, t);
        Form f0("abdennacer", 23 ,150);
        Form f1("omar", 5, 1);
        Form bf("mugiwara", 11, 4);

        std::cout << std::endl << "----------------- Signing form for bureaucrat --------------"<< std::endl;
        
        b1.signForm(bf);
        
        std::cout << std::endl << "----------------- FORM 0 : -------------\n\n";
        f0.beSigned(b1);
        if (f0._isSigned_())
            std::cout << W << "Signed\n" << DEF;
        std::cout << W << f0 << DEF << std::endl;
        
        std::cout << std::endl << "----------------- FORM 1 : -------------\n\n";
        std::cout << W << f1 << DEF << std::endl;
        f1.beSigned(b1);
    }
    catch(const std::exception& e)
    {
        std::cout << R << "catch of the main : " << e.what() << DEF << std::endl;
    }
    
    std::cout << "END! \n";
    return 0;
}