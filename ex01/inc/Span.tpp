/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 13:56:18 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/10 14:03:07 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
# define SPAN_TPP

# include "Span.hpp"

template<typename T>
void Span::addNumber(T begin, T end)
{
	size_t distance = std::distance(begin, end);

	if (vect.size() + distance >= n )
		throw std::out_of_range(RED "[EXCEPTION]: " RT "Not enough space in Span");
	vect.insert(vect.end, begin. end);
}
#endif
