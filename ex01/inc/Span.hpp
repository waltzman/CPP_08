/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:22:31 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/09 15:17:31 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <limits.h>
#include <exception>
#include <vector>
#include <algorithm>

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

		// add a range of numbers to the Span
		template<typename T>
		void addFromContainer(T begin, T end);
		void addNumber(int num);
		int ShortestSpan();
		int longestSpan();
		void fillFromRange(int begin, int end);
		void fill(int value, int quantity);
		
}; 

#endif
