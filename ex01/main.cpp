/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 16:42:51 by rlobun            #+#    #+#             */
/*   Updated: 2026/09/10 17:36:31 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <list>

static void printTest(const std::string &name)
{
	std::cout << "\n========== " << name << " ==========" << std::endl;
}

int main()
{
	// ------------------------------------------------------------
	// Basic addNumber test
	// ------------------------------------------------------------
	printTest("Basic addNumber");

	try
	{
		Span sp(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Iterator addNumber test
	// ------------------------------------------------------------
	printTest("Iterator addNumber");

	try
	{
		std::vector<int> numbers;

		numbers.push_back(44);
		numbers.push_back(234);
		numbers.push_back(344);
		numbers.push_back(65);

		Span sp(10);

		sp.addNumber(numbers.begin(), numbers.end());
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// fillWithRange ascending
	// ------------------------------------------------------------
	printTest("fillWithRange ascending");

	try
	{
		Span sp(10);

		sp.fillWithRange(1, 5);

		std::cout << "Added range: 1 -> 5" << std::endl;
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// fillWithRange descending
	// ------------------------------------------------------------
	printTest("fillWithRange descending");

	try
	{
		Span sp(10);

		sp.fillWithRange(5, 1);

		std::cout << "Added range: 5 -> 1" << std::endl;
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// fillWith(value, quantity)
	// ------------------------------------------------------------
	printTest("fillWith");

	try
	{
		Span sp(10);

		sp.fillWith(42, 5);

		std::cout << "Added 42 five times" << std::endl;
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Capacity test: addNumber
	// ------------------------------------------------------------
	printTest("Capacity - addNumber");

	try
	{
		Span sp(3);

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);

		std::cout << "Span is full, trying to add another number..."
				  << std::endl;
		std::cout << "Vector: " << sp << std::endl;
		sp.addNumber(4);
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Capacity test: iterator addNumber
	// ------------------------------------------------------------
	printTest("Capacity - iterator addNumber");

	try
	{
		Span sp(3);

		std::vector<int> numbers;

		numbers.push_back(1);
		numbers.push_back(2);
		numbers.push_back(3);
		numbers.push_back(4);
		numbers.push_back(5);
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Trying to add 5 numbers to Span of size 3..."
				  << std::endl;

		sp.addNumber(numbers.begin(), numbers.end());

		std::cout << "This should not be printed." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Capacity test: fillWithRange
	// ------------------------------------------------------------
	printTest("Capacity - fillWithRange");

	try
	{
		Span sp(5);

		sp.addNumber(100);
		sp.addNumber(200);
		std::cout << "Vector: " << sp << std::endl;
		std::cout << "Trying to add range 1 -> 5 with only 3 spaces..."
				  << std::endl;

		sp.fillWithRange(1, 5);

		std::cout << "This should not be printed." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Capacity test: fillWith
	// ------------------------------------------------------------
	printTest("Capacity - fillWith");

	try
	{
		Span sp(5);

		sp.addNumber(1);
		sp.addNumber(2);

		std::cout << "Trying to add 4 numbers with only 3 spaces..."
				  << std::endl;
		std::cout << "Vector: " << sp << std::endl;
		sp.fillWith(42, 4);

		std::cout << "This should not be printed." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Not enough numbers for shortestSpan / longestSpan
	// ------------------------------------------------------------
	printTest("Not enough numbers");

	try
	{
		Span sp(10);

		sp.addNumber(42);

		std::cout << "Trying shortestSpan with one number..."
				  << std::endl;

		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Empty Span
	// ------------------------------------------------------------
	printTest("Empty Span");

	try
	{
		Span sp(0);

		std::cout << "Trying to add to Span(0)..." << std::endl;

		sp.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	// ------------------------------------------------------------
	// Different iterator type: list
	// ------------------------------------------------------------
	printTest("Iterator with std::list");

	try
	{
		std::list<int> numbers;

		numbers.push_back(100);
		numbers.push_back(50);
		numbers.push_back(25);
		numbers.push_back(75);

		Span sp(10);

		sp.addNumber(numbers.begin(), numbers.end());

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}
