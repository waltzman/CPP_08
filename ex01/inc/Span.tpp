/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:56:18 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/10 17:07:25 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
# define SPAN_TPP

# include "Span.hpp"
/*
template<typename T>
void Span::addNumber(T begin, T end)
{
	typename T::iterator it;
	size_t distance = std::distance(begin, end);

	if (vect.size() + distance >= n )
		throw std::out_of_range(RED "[EXCEPTION]: " RT "Not enough space in Span");
	vect.insert(vect.end(), vect.end());
}

*/

template <typename T>
void Span::addNumber(T begin, T end)
{
	unsigned int count = 0;
	T it = begin;

	while (it != end)
	{
		++count;
		++it;
	}

	if (vect.size() + count > n)
		throw std::out_of_range("Not enough space in Span");

	while (begin != end)
	{
		vect.push_back(*begin);
		++begin;
	}
}
#endif
