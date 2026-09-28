#include "Cart.h"


bool Cart::AddBook(Book* bk)
{
	if (bk != nullptr)
	{
		books.push_back(bk);
		return true;
	}
	return false;
}

int Cart::size()
{
	return books.size();
}
int Cart::AddAllBooks(std::vector<Book*>& bks)
{
	return 0;
}


int main()
{

}