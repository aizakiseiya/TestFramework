#include "TestCase.h"

void TestCase::run(TestResult& result)
{
	ASSERT(1+1 == 2, result, testName_);
	ASSERT(1+1 != 2, result, testName_);
	ASSERT(2+2 == 3, result, testName_);
}
