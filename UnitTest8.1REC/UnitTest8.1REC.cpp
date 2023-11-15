#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1REC/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81REC
{
	TEST_CLASS(UnitTest81REC)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            char str1[] = "++-==";
            int result1 = Count(str1, 0, 0);
            Assert::AreEqual(5, result1);
		}
	};
}
