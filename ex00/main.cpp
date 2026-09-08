/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:02:11 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/08 13:51:29 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "container_tests.hpp"

int main()
{
	testVector();
	std::cout << std::endl;

	testList();
	std::cout << std::endl;

	testDeque();
	std::cout << std::endl;

	testConstVector();
	std::cout << std::endl;

	return 0;
}
