#pragma once
#include <vector>
#include "Book.h"
class Cart
{
	std::vector<Book*> books;

public:
	bool AddBook(Book* bk);
	int AddAllBooks(std::vector<Book*>& bks);
	int size();
};

