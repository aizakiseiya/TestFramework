#include <string>

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
	
	TestCase(std::string testName)
		: testName_(testName) {} ;

	void run(TestResult& result);
private:
	
	std::string testName_;
};

