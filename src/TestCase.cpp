#include "TestCase.h"

void TestCase::run(TestResult& result)
{
	Assertion::Assert(1+1 == 2, result);
	Assertion::Assert(1+1 != 2, result);
}
