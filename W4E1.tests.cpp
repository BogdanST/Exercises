#include "stdafx.h"
#include "CppUnitTest.h"
#include "../W4E1/W4E1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace W4E1tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		int ExpectedResult[10] = {0,1,2,3,4,5,6,7,8,9};
		TEST_METHOD(TestInsertSort)
		{
			int i = 0; bool ok = false;
			InsertSort Isort;
			int SortArray[] = { 2,7,9,4,1,5,3,6,0,8 };
			Isort.PrintInsertSort();

			for (i = 0; i < size(SortArray); ++i) {
				if (SortArray[i] == ExpectedResult[i])
					ok = true;
			}
			if (ok == true)
				Assert::AreEqual(1, 1);
				else
				Assert::AreEqual(1, 0);

		}
		TEST_METHOD(TestBubbleSort) {
			int i = 0; bool ok = false;
			BubleSort BSort;
			int SortArray[] = { 2,7,9,4,1,5,3,6,0,8 };
			BSort.PrintBubbleSort();

			for (i = 0; i < size(SortArray); ++i) {
				if (SortArray[i] == ExpectedResult[i])
					ok = true;
			}
			if (ok == true)
				Assert::AreEqual(1, 1);
			else
				Assert::AreEqual(1, 0);

		}
		TEST_METHOD(TestSelectionSort) {
			int i = 0; bool ok = false;
			SelectionSort SSort;
			int SortArray[] = { 2,7,9,4,1,5,3,6,0,8 };
			SSort.PrintSelectionSort();

			for (i = 0; i < size(SortArray); ++i) {
				if (SortArray[i] == ExpectedResult[i])
					ok = true;
			}
			if (ok == true)
				Assert::AreEqual(1, 1);
			else
				Assert::AreEqual(1, 0);

		}
	};
}