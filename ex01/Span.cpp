/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 14:21:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/09 15:19:50 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0) {};
Span::Span(unsigned int number): n(number), vect(0)
{
	if (n > INT_MAX)
		n = INT_MAX;
		std::cerr << \033[31m [ERROR] 
	vect.reserve(number);
};
Span::Span(const Span& origin)
{
	*this = origin;
}
Span& Span::operator=(const Span& origin)
{
	if (this != &origin)
	{
		n = origin.n;
		vect = origin.vect;
	}
}

Span::~Span() {};

void Span::addNumber
