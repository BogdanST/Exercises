#include "stdafx.h"
#include "CppUnitTest.h"
#include "../W4E2/W4E2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace W4E2tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(GussMe)
		{	
			int min = 1, max = 20000;
			int expectedNumber = 2822;
			guessnumber Gnumber;
			int output = Gnumber.GuessTheNumber(min, max, expectedNumber);
			Assert::AreEqual(output, expectedNumber);
		}
	};
}