#include "stdafx.h"
#include "CppUnitTest.h"
#include "../W3E1/W3E1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace W3E1tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(reverseStringRecursively)
		{
			reverseString StringReversed;
			string word = "Maria";
			string ExpectedResult = "airaM";

			Assert::AreEqual(StringReversed.reverseStringRecursively(word),ExpectedResult);
		}

	};
}