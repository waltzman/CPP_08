/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyfindNotFoundException.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:33:45 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/07 15:28:47 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyfindNotFoundException.hpp"

const char* EasyfindNotFoundException::what() const throw()
{
	return RED_BG WHITE_TXT "EXCEPTION:" RESET " [EASYFIND]: Value not found";
}
