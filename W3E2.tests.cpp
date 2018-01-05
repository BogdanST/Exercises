#include "stdafx.h"
#include "CppUnitTest.h"
#include "../W3E2/W3E2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace W3E2tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		int i, target = 5;
		int A[6] = { 3,5,7,1,2,9 };

		int LinearSearch(int target) {
			for (int i = 0; i < size(A); i++) {
				if (A[i] == target)
					return true;
			}
		}
		
		TEST_METHOD(RecursiveSearch)
		{			
			RecursiveLinearSeach Search;
			Search.RLS(A, 5, target);

			Assert::AreEqual(Search.RLS(A, size(A) - 1, target), LinearSearch(target));
		}
	};
}