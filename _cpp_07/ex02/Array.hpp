/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:09:52 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/11 10:21:32 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <typename T>
class Array{
	
	private:
		size_t	_len_;
		T		*_arr_;

	public:
		Array() : _len_(0), _arr_(nullptr) { }
		
		Array(unsigned int len) : _len_(len)
		{
			this->_arr_ = new T[len];
			memset(_arr_, 0, sizeof(T) * _len_);
		}
		
		Array(Array const& obj)
		{
			*this = obj;
		}

		Array&	operator = (Array const& obj)
		{
			if (this != &obj)
			{
				_arr_ = nullptr;
				delete [] _arr_;
				_len_ = obj._len_;
				_arr_ = new T[_len_];
				std::copy(obj._arr_, obj._arr_ + _len_, _arr_);
 			}
			return (*this);
		}
		
		T&	operator [] (size_t i)
		{
			if (i >= _len_)
				throw std::runtime_error("Invalid Index !");
			return (_arr_[i]);
		}

		size_t	size() const
		{
			return (_len_);
		}

		~Array ()
		{
			delete [] _arr_;
		}

};

#endif
