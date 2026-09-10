/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:22:31 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/10 17:42:09 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <limits.h>
#include <exception>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

# define RED	"\033[31m"
# define YELLOW "\033[33m"
# define RT "\033[0m"

class NotFoundException: public std::exception
{
	public:
		virtual const char* what() const throw();
};


class Span
{
	private:
		unsigned int n;
		std::vector<int> vect;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& origin);
		~Span();

		Span& operator=(const Span& origin);

		const std::vector<int> getNumbers() const;
		void addNumber(int num);
		template <typename T>
		void addNumber(T begin, T end);
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
		void fillWithRange(int begin, int end);
		void fillWith(int value, int quantity);
		
}; 

#include "Span.tpp"

std::ostream &operator<<(std::ostream &out, const Span &span);

#endif
