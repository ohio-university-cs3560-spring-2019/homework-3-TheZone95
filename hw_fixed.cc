#include <iostream>
#include <vector>
#include <cmath>

/**		\file hw_fixed 
 *	Contains the standard deviation function
*/

/**
	\brief Calculates the standard deviation of a array of integers.
	\param a An array of integers
	\param n The size of array a
	\return The standard deviation of all numbers in array a	
*/
int deviation(int* a, int n)
{
	double sum = 0, mean = 0, stddev = 0;
	std::vector<int> v;

	for (int i = 0; i < n; i++)
	{ v.push_back(a[i]); }

	for (size_t i = 0; i < v.size(); i++)
	{ sum += v[i]; }

	mean = (sum /= v.size());

	for (size_t i = 0; i < v.size(); i++)
	{ stddev += pow((double)v[i] - mean, 2); }
	stddev /= v.size();

	if (sum == 0)
		std::cout << "Sigma is zero." << std::endl;

	return sqrt(stddev);
}