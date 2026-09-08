/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 07:50:33 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/08 13:08:10 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <exception>

template <typename U>
typename U::iterator easyfind(U& container, int valueToFind);

template <typename U>
typename U::constIterator easyfind(const U& container, int valueToFind);

#include "easyfind.tpp"
#endif
