#include "pch.h"
#include "CppUnitTest.h"
#include "../PR2.2/Complex.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT22
{
	TEST_CLASS(UT22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex m(1.0, 1.0), f(1.0, 1.0);

			Assert::AreEqual(1.0, m.GetX());
		}
	};
}