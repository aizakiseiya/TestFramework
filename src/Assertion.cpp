#include <iostream>
#include <sstream>

#ifndef _ASSERTION_
#define _ASSERTION_
#include "Assertion.h"
#endif

void Assertion::Check(const bool condition)
{
	// テストの実施回数を+1
	result_.AddTestCount(1);
	if (!condition) {
		std::stringstream message;
		message << expression_ << ": " << testName_ << "\n";
		result_.AddFailedMessage(message.str());
		// テストの失敗回数を+1
		result_.AddFailedCount(1);
	}
}
