#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/project5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const double x = 2;
			const int n = 1;
			double a = 1;
			c = A(x, n, a);
			Assert::AreEqual(c, -2.0);
		}
	};
}
