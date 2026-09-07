/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:11:14 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/07 15:24:16 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyfindNotFoundException.hpp"
#include <iostream>

template <typename U>

// c - container
// v - value to find
typename U::iterator easyfind(U& c, int v)
{
	if (c.size() < 1)
		throw std::invalid_argument("Error: No arguments");
	
	typename U::iterator it;

	it = std::find(c.begin(), c.end(), v);

	if (it == c.end())
		throw EasyfindNotFoundException();

	return it;
}


