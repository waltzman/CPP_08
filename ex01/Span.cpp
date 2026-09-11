/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:21:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/11 12:34:37 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() : n(0) {};
Span::Span(unsigned int number): n(number), vect(0)
{
	if (n > UINT_MAX)
	{
		n = UINT_MAX;
		std::cerr << RED << "[ERROR]: " RT "Number is above UINT_MAX () \n"
				  << "changed to UINT_MAX\n "
				  << n << RT << std::endl;
	}
	
	try
	{
		vect.reserve(n);
	}
	catch (std::exception &e)
	{
		std::cerr << RED "[EXCEPTION]: " RT "Could not construct Span(" << n << ")\n"
				  << "Allocation error. Try less number of elements" 
				  << std::endl;
		throw;
	}
};
Span::Span(const Span& origin)
	try : vect(origin.vect)
	{
		n = origin.n;
	}
	catch (std::exception &e)
	{
		std::cerr << RED << "[EXCEPTION]: " RT "Could not copy Span(" << origin.n << ") object\n"
				  << "Allocation error. Try less number of elements" 
				  << std::endl;
		throw;
	}

Span& Span::operator=(const Span& origin)
{
	if (this != &origin)
	{
		Span temp(origin);

		std::swap(*this, temp);
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Span &span)
{
	const std::vector<int> &numbers = span.getNumbers();
	if (numbers.size() == 0)
		return (out << YELLOW "Span is empty!!! " RT);
	out << "[";
	for (std::vector<int>::const_iterator it = numbers.begin();
		 it != numbers.end(); ++it)
	{
		out << *it;

		if (it + 1 != numbers.end())
			out << " ";
	}

	out << "] --> Size:" << numbers.size();

	return (out << RT);
}

Span::~Span() {};

const std::vector<int>& Span::getNumbers() const
{
	return vect;
}

void Span::addNumber(int num)
{
	if (vect.size() >= n)
		throw std::out_of_range(RED "[EXCEPTION]:" RT "Span is full!!!");
	vect.push_back(num);
}

void Span::fillWithRange(int begin, int end)
{
	unsigned int count;

	if (begin <= end)
		count = static_cast<unsigned int>(end - begin) + 1;
	else
		count = static_cast<unsigned int>(begin - end) + 1;

	if (vect.size() + count > n)
		throw std::out_of_range(RED "[EXCEPTION]: " RT " Not enough space in Span");

	if (begin <= end)
	{
		for (int i = begin; i <= end; ++i)
			vect.push_back(i);
	}
	else
	{
		for (int i = begin; i >= end; --i)
			vect.push_back(i);
	}
}

void Span::fillWith(int value, int quantity)
{
	if (quantity < 0)
		throw std::invalid_argument(RED "[EXCEPTION]: " RT "Quantity cannot be negative");

	if (vect.size() + static_cast<unsigned int>(quantity) > n)
		throw std::out_of_range(RED "[EXCEPTION]: " RT " Not enough space in Span");

	for (int i = 0; i < quantity; ++i) 
		vect.push_back(value);
}

unsigned int Span::shortestSpan() const
{
	if (vect.size() < 2)
		throw std::logic_error(RED "[EXCEPTION]: " RT "Not enough numbers in vector");
	
	std::vector<int> sorted = vect;

	std::sort(sorted.begin(), sorted.end());

	int shortest = static_cast<int>(sorted[1] - sorted[0]);

	for (size_t i = 2; i < vect.size(); ++i)
	{
		int dist =static_cast<int>(sorted[i] -sorted[i - 1]);
		if (dist < shortest)
			shortest = dist;
	}
	return (shortest);
}

unsigned int Span::longestSpan() const
{
	if (vect.size() < 2)
		throw std::logic_error(RED "[EXCEPTION]: " RT "Not enough numbers in vector");
	long min = *std::min_element(vect.begin(), vect.end());
	long max = *std::max_element(vect.begin(), vect.end());
	
	return static_cast<unsigned int>(max - min);
}


