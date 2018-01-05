#include "stdafx.h"
#include "CppUnitTest.h"
#include "../W1E2/W1E2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace W1E2tests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestifArmstrongNumber)
		{
			int ArmstrongList[] = { 153,370,371,407};  //expected results;

			for (int i = 0; i <= size(ArmstrongList)-1; i++)
			{
				ArmstrongNumbers sum; 
				Assert::AreEqual(sum.ArmstrongNumber(ArmstrongList[i]), ArmstrongList[i]);
			}
		}

	};
}