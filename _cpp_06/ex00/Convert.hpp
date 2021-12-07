/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:35:43 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/07 22:47:20 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERT_HPP	
# define CONVERT_HPP

# include <iostream>
# include <stdexcept>
# include <string>

# define Y "\033[1;33m"
# define S_B "\033[1;36m"
# define R "\033[1;31m"
# define G "\033[1;32m"
# define W "\033[1;37m"
# define DEF "\033[0;37m"

class	Convert{
	
	private:
		Convert();
		Convert&	operator = (Convert const& obj);
		std::string		str_convert;
	
	public:
		Convert(char	**argv, int args);
		~Convert();

		bool	_wrong_arg() const;
		// void	_start_converting() const;

		class	WrongArgs : public std::exception{
			
			private:
				std::string	_error_;
			
			public:
				WrongArgs(std::string errorMsg);
				~WrongArgs() throw();
				
				const char*	what() const throw();
		};

};

#endif