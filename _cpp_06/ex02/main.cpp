/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 00:23:05 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 00:23:06 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>


class Base{

	public:
    	virtual ~Base() { };

};

class A : public Base{

	public:
		~A()
		{
			std::cout << "Destructor of A" << std::endl;
		}

};

class B : public Base{

	public:
    	~B()
    	{
        	std::cout << "Destructor of B" << std::endl;
    	}

};

class C : public Base{

	public:
    	~C()
    	{
        	std::cout << "Destructor of C" << std::endl;
    	}
};

Base*	generate(void)
{
    srand(time(0));
    
    int _rand = rand() % 5;

    if (_rand == 0)
        return (new A);
    else if (_rand > 5)
        return (new B);
    else
        return (new C);
}


// 		identify for pointers :

void		identify(Base* p)
{

//------------------ For class A:
    A *ptr_A = dynamic_cast<A*>(p);
    if (ptr_A != nullptr)
    {
        std::cout << "A" << std::endl;
         return ;
    } 
//------------------ For class B :
    B *ptr_B = dynamic_cast<B*>(p);
    if (ptr_B != nullptr)
    {
        std::cout << "B" << std::endl;
         return ;
    } 

//------------------ For class C :
    C *ptr_C = dynamic_cast<C*>(p);
    if (ptr_C != nullptr)
    {
        std::cout << "C" << std::endl;
         return ;
    } 
}

// 		indentify for references :
void		identify(Base& p)
{

//------------------ For class A :
    try
    {
        A &ref_A = dynamic_cast<A&>(p);
        (void)ref_A;
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    { }

//------------------ For class B :
    try
    {
        B &ref_B = dynamic_cast<B&>(p);
        (void)ref_B;
        std::cout << "B" << std::endl;
         return ;
    }
    catch(const std::exception& e)
    { }

//------------------ For class C :
    try
    {
        C &ref_C = dynamic_cast<C&>(p);
        (void)ref_C;
        std::cout << "C" << std::endl;
         return ;
    }
    catch(const std::exception& e)
    { }
}


int main()
{
    Base *test = generate();

    identify(test);
    identify(*test);
    
    delete test;

    return (0);
}