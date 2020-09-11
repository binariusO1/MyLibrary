#pragma once
#include <vector>
/*
11-09-2020
*/

namespace dsp {

////////////////////////////////////////////////////////////
/*
	display
*/
////////////////////////////////////////////////////////////

template<class T>
void display(const std::vector<T>& v)
{
	for (const auto & x : v)
	{
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}

template<class T>
void display(const std::vector<T>& v,const char * txt)
{
	std::cout << txt << std::endl;
	for (const auto& x : v)
	{
		std::cout << x << ' ';
	}
	std::cout << std::endl;
}

void display(const std::string& v)
{
	std::cout << v;
	std::cout << std::endl;
}

////////////////////////////////////////////////////////////
/*
	displayEndl
*/
////////////////////////////////////////////////////////////

template<class T>
void displayEndl(const std::vector<T>& v)
{
	for (const auto& x : v)
	{
		std::cout << x << std::endl;
	}
	std::cout << std::endl;
}

template<class T>
void displayEndl(const std::vector<T>& v, const char* txt)
{
	std::cout << txt << std::endl;
	for (const auto& x : v)
	{
		std::cout << x << std::endl;
	}
	std::cout << std::endl;
}

}