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
	TestCase* test = new TestCase();

	// テスト結果を格納するクラス
	TestResult result;

	// テスト実行
	test->run(result);

	if( result.GetFailCount() == 1 ){
		std::cout << "OK" << std::endl;
	} else {
		std::cout << "NG" << std::endl;
	}

	return 0;
}
