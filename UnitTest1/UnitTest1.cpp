#include "pch.h"
#include "CppUnitTest.h"
#include "../7.2_iter/7.2_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 3;
			int a[n][n] = { {1,2,3},{-2,3,-7},{5,0,1} };
			int* arr[3] = { a[0], a[1], a[2] };
			t = Sum((int**)arr, n);
			Assert::AreEqual(t, 5);
		}
	};
}
