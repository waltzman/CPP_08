/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rlobun <rlobun@student.42madrid.com>	   +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/11/02 15:51:56 by rlobun			#+#	#+#			 */
/*   Updated: 2026/11/02 16:08:49 by rlobun		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{	
	
	{
		std::cout << "\033[31m" << " \n *************** MUTANT STACK ****************** \n"<< "\033[0m" << std::endl;

		std::cout << "\033[33m" << "Subject test\n"<< "\033[0m";

		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "MutantStack top:\t" << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "MutantStack size:\t" << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "MutantStack: ";
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

		std::cout << "MutantStack: ";
		while (rit != rite)
		{
			std::cout << *rit << " ";
			++rit;
		}
		std::cout << std::endl;

	}

	{
		std::cout << "\033[31m" << " \n ***************     LIST     ****************** \n"<< "\033[0m" << std::endl;

		std::cout << "\033[33m" << "Subject test 2\n"<< "\033[0m";

		// Replacing MutantStack<int> with std::list<int>
		std::list<int> mlist;

		// std::list uses push_back to simulate the insertion order of a stack
		mlist.push_back(5);
		mlist.push_back(17);

		// The equivalent of stack.top() for a list/underlying container is back()
		std::cout << "List top:\t" << mlist.back() << std::endl;

		mlist.pop_back();

		std::cout << "List size:\t" << mlist.size() << std::endl;

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		// Using standard list iterators
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();

		++it;
		--it;
		std::cout << "List: ";
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	
		// Initializing a std::stack from a std::list container template configuration
		// (Note: std::stack by default wraps deque, but can take list as its sequence container)
		std::stack<int, std::list<int> > s(mlist);


		std::cout << "\033[33m" << "Test with rbegin and rend\n"<< "\033[0m";

		// Using standard list reverse iterators
		std::list<int>::reverse_iterator rit = mlist.rbegin();
		std::list<int>::reverse_iterator rite = mlist.rend();

		std::cout << "List: ";
		while (rit != rite)
		{
			std::cout << *rit << " ";
			++rit;
		}
		std::cout << std::endl;

		return 0;
	}
}	
