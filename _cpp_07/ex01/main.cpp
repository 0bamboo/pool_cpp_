/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 04:57:05 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 10:33:36 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];

iter( tab, 5, print );
iter( tab2, 5, print );

return 0;
}

// int main()
// {
//     int			array_num[] = {1,2,3,4,5,6,8,9,10};
//     std::string	array_names[] = {"nowl0_1","mugiwara","zoro","mihawk"};

// 	std::cout << "-------------- Array of numbers: -------------------\n";
//     iter(array_num, 9, func_test);
	
// 	std::cout << "-------------- Array of strings: -------------------\n";
//     iter(array_names, 4, func_test);

//     return 0;
// }