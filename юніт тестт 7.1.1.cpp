#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 7.1.1/лаба 7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттестт711
{
	TEST_CLASS(юніттестт711)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = { 1 };
			int** r = new int* [8];
			for (int i = 0; i < 8; i++)
				r[i] = new int[8];
			Create(r, 8, 8, 1, 1);
			int t = r[1][1];
			Assert::AreEqual(t, 1);
		}
	};
}
