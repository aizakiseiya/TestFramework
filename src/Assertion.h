#include <string>

#ifndef _TESTRESULT_
#define _TESTRESULT_
#include "TestResult.h"
#endif

class Assertion
{
public:
	Assertion(const std::string expression, TestResult& result, const std::string testName) 
		: expression_(expression), result_(result), testName_(testName) {}
	
	void Check(const bool condition);

private:
	std::string expression_;
	TestResult& result_;
	std::string testName_;
};

#define ASSERT(expression, result, testName) Assertion(#expression, result, testName).Check(expression)
