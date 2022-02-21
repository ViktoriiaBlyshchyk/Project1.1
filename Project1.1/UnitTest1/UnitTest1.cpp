#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project1.1\Project1.1\IntPower.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			IntPower b;
			a = b.Init(2, 2);
			Assert::IsTrue(a);
		}
	};
}
