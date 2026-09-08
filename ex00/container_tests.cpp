/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   container_tests.cpp								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rlobun <rlobun@student.42madrid.com>	   +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/09/07 14:59:47 by rlobun			#+#	#+#			 */
/*   Updated: 2026/09/07 15:19:53 by rlobun		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "container_tests.hpp"

void testVector()
{
	std::cout << "\n ===== V E C T O R =====" << std::endl;

	std::vector<int> vec;

	vec.push_back(45);
	vec.push_back(456);
	vec.push_back(5464);
	vec.push_back(0);

	try
	{
		std::vector<int>::iterator it = easyfind(vec, 45);
		std::cout << "Found: " << *it << std::endl;

		it = easyfind(vec, 99);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testList()
{
	std::cout << "\n ===== L I S T =====" << std::endl;

	std::list<int> lst;

	lst.push_back(46);
	lst.push_back(44);
	lst.push_back(38);
	lst.push_back(6860);

	try
	{
		std::list<int>::iterator it = easyfind(lst, 38);
		std::cout << "Found: " << *it << std::endl;

		it = easyfind(lst, 999);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testDeque()
{
	std::cout << "\n ===== D E Q U E =====" << std::endl;

	std::deque<int> deq;

	deq.push_back(1000);
	deq.push_back(2000);
	deq.push_back(3000);
	deq.push_back(4000);
	deq.push_front(5000);

	try
	{
		std::deque<int>::iterator it = easyfind(deq, 5000);
		std::cout << "Found: " << *it << std::endl;

		it = easyfind(deq, 9999);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testConstVector()
{
	std::cout << "\n ===== C O N S T   V E C T O R =====" << std::endl;

	std::vector<int> vecTemp;

	vecTemp.push_back(45);
	vecTemp.push_back(456);
	vecTemp.push_back(5464);
	vecTemp.push_back(0);

	const std::vector<int> vec = vecTemp;

	try
	{
		std::vector<int>::const_iterator it = easyfind(vec, 45);
		std::
		std::cout << "Found: " << *it << std::endl;

		it = easyfind(vec, 99);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}



