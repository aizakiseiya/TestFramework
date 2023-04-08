#ifndef _TESTRESULT_
#define _TESTRESULT_
#include "TestResult.h"
#endif

#ifndef _ASSERTION_
#define _ASSERTION_
#include "Assertion.h"
#endif

class TestCase
{
public:
	using TestFunc = void(*)(void);
	TestCase() {} ;

	void run(TestResult& result);
private:
	TestFunc func_;
};

