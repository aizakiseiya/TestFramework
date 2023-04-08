#include <iostream>
#include <vector>

#ifndef _TESTCASE_
#define _TESTCASE_
#include "TestCase.h"
#endif

#ifndef _TESTRESULT_
#define _TESTRESULT_
#include "TestResult.h"
#endif

int main()
{ 
	// テストケース生成
	TestCase* test = new TestCase("test");

	// テスト結果を格納するクラス
	TestResult result;

	// テスト実行
	test->run(result);

	std::cout << result.GetFailCount() << std::endl;

	std::cout << result.GetTestCount() << std::endl;
	
	delete test;
	return 0;
}
