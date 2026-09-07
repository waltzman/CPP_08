/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyfindNotFoundException.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 14:19:14 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/07 15:25:40 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_NOT_FOUND_EXCEPTION_HPP
# define EASYFIND_NOT_FOUND_EXCEPTION_HPP
# include <exception>

#define RED_BG "\033[41m"
#define WHITE_TXT "\033[37m"
#define RESET "\033[0m"

class EasyfindNotFoundException: public std::exception
{
	virtual const char* what() const throw();
};

#endif
