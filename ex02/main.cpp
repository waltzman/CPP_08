/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:51:56 by rlobun            #+#    #+#             */
/*   Updated: 2026/11/02 15:59:50 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::cout << "\033[33m" << "Subject test\n"<< "\033[0m";

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Mutant stack top:\t" << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Mutant stack size:\t" << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	std::cout << "stack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);



	std::cout << "\033[33m" << "Test with rbegin and rend\n"<< "\033[0m";

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	std::cout << "stack: ";
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;
	
	return 0;
}
