/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdait-m <abdait-m@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 11:02:38 by abdait-m          #+#    #+#             */
/*   Updated: 2021/12/14 02:10:46 by abdait-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

span::span(unsigned int n) : length(n) { }

span::span(const span& obj) : length(obj.length), vect(obj.vect) { }

void		span::addNumber(int num)
{
	if (vect.size() >= this->length)
		throw std::logic_error("Error : Attempt to store more than N numbers !");
	vect.push_back(num);
}

void		span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator end)
{
	if (end < first)
		throw std::logic_error("last address must be greater then the first one");
	else if (vect.size() + end - first >= length)
		throw std::logic_error("Error : Attempt to store more than N numbers !");
	this->vect.insert(vect.end(), first, end);
}

int			span::shortestSpan()
{
	int		shortestSpan;

	//example 1 : -7 1 2 4
	//example 2 : 1 2 3 4
	if (this->vect.size() > 1)
	{
		std::vector<int> tmp = this->vect;
		sort(tmp.begin(), tmp.end());
		shortestSpan = tmp[1] - tmp[0];
		for (int i = 1 ; i < tmp.size() - 1 ; i++)
		{
			int tmp_ss = tmp[i + 1] - tmp[i];
			if (tmp_ss < shortestSpan)
				shortestSpan = tmp_ss;
		}
	}
	else
		throw std::logic_error("Error: Empty array or only one element in the array !");
	return (shortestSpan);
}

int			span::longestSpan()
{
	if (this->vect.size() > 1)
		return ((*std::max_element(this->vect.begin(), this->vect.end()) - *std::min_element(this->vect.begin(), this->vect.end())));
	else
		throw std::logic_error("Error: Empty array or only one element in the array !");
}

span::~span() { }
