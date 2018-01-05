#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Week 1 exercise 1/W1E1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace Week1Exercise1UnitTesting
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Concatenate)
		{
			std::string output;
			std::string expected = "dtaiyme";
			Concatenation newString;
			 output = newString.Concatenate("day","time");

			 Assert::AreEqual(output, expected);
		}

	};
}