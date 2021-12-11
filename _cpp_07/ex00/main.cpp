/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:48:04 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 08:12:51 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "whatever.hpp"

// class Awesome {
// public:
// Awesome( int n ) : _n( n ) {}
// bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
// bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
// bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
// bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
// bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
// bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
// public:
// 	int _n;
// };

// std::ostream & operator << (std::ostream & os, const Awesome &obj )
// {
// 	os << obj._n;
// 	return (os);
// }

// int main( void )
// {
// 	Awesome a = 2;
// 	Awesome b = 1337;
	
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

int main( void )
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}