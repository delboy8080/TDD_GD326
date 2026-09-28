#include <vector>
#include "pch.h"
#include "CppUnitTest.h"
#include "../TDD_GD326/Book.h"
#include "../TDD_GD326/Cart.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace TestShoppingCart
{
	TEST_CLASS(TestShoppingCart)
	{
		Book *b1, *b2, *b3;
		
		
	public:
		TEST_METHOD_INITIALIZE(classSetUp)
		{
			b1 = new Book("The hobbitt", 11.99);
			b2 = new Book("The Philosophers Stone ", 7.99);
			b3 = new Book("The Rookie", 12.99);
		}

		TEST_METHOD_CLEANUP(cleanup)
		{
			delete b1, b2, b3;
		}
		TEST_METHOD(testAddBook)
		{
			Cart c;
			bool result = c.AddBook(b1);
			Assert::IsTrue(result,L"Book not added");
			Assert::AreEqual(1, c.size(), L"Wrong number of items in cart");
		}
		
		TEST_METHOD(testAddNoBook)
		{
			Cart c;
			bool result = c.AddBook(nullptr);
			Assert::IsFalse(result, L"Nullptr added to cart");
			Assert::AreEqual(0, c.size(), L"Wrong number of items in cart");

		}

		TEST_METHOD(testAddAllWithBooksList)
		{
			Cart c;
			vector<Book*> bks;
			bks.push_back(b1);
			bks.push_back(b2);
			bks.push_back(b3);
			Assert::AreEqual(3, c.AddAllBooks(bks), L"Wrong return value");
			Assert::AreEqual(3, c.size(),L"Wrong number of books in cart");
		}
	};
}
