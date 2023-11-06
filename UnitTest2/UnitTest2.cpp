#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			double x = 2.0;
			double y = 3.0;
			double expected = (((sin(x)) / (x * x + y * y)) + (cos(y)) / (1 + abs(x * y)));
			// Act
			double actual = k(x,y);
			
			// Assert
			Assert::AreEqual(expected, actual);
		}
	};
}
