/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:54:08 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/04 22:10:39 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class	Bureaucrat{

	private:
		

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const& copy);
		Bureaucrat& operator = (Bureaucrat const& copy);
		~Bureaucrat();

};

#endif