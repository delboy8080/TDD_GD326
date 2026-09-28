#pragma once
#include <iostream>

struct Book
{
	std::string title;
	double price;
	Book(std::string s, double p)
	{
		this->title = s;
		this->price = p;
	}
};