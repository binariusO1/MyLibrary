#pragma once
#include <vector>
/*
## v1.00
10-09-2020
*/
template<class T>
void display(const std::vector<T>& v)
{
	for (auto& x : v)
	{
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}

template<class T>
void display(const std::vector<T>& v,const char * txt)
{
	std::cout << txt << std::endl;
	for (auto& x : v)
	{
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}