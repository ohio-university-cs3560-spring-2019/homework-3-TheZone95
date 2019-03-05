#include <iostream>
#include <vector>
#include <cmath>
#include <cstdarg>

/**		\file hw_fixed 
 *	Contains the standard deviation function
*/

/**
	\brief Calculates the standard deviation of a array of integers.
	\param n The amount of values used to calculate the standard deviation of
	\param ... Integers to find the standard deviation o
	\return The standard deviation of all numbers in array a	
*/
double deviation(int n, ...)
{
	va_list list;
	va_start(list, n);

	double sum = 0, mean = 0, stddev = 0;
	std::vector<int> v;

	for (int i = 0; i < n; i++)
	{
		v.push_back(va_arg(list, int));
	}

	for (size_t i = 0; i < v.size(); i++)
	{ sum += v[i]; }

	mean = (sum /= v.size());

	for (size_t i = 0; i < v.size(); i++)
	{ stddev += pow((double)v[i] - mean, 2); }
	stddev /= v.size();

	if (sum == 0)
		std::cout << "Sigma is zero." << std::endl;

	va_end(list);
	return sqrt(stddev);
}

