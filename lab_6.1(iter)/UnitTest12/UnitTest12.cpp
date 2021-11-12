#include "pch.h"
#include "CppUnitTest.h"
#include "F:/АП/lab_6.1(iter)/lab_6.1(iter)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 6,12,3,1 };
			int k = Sum(a, 4);
			Assert::AreEqual(22, k);
		
		}
	};
}
