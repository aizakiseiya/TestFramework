#include <vector>

#include "TestCase.h"
#include "TestResult.h"

int main()
{ 
	// テストケース生成
	std::vector<TestCase> test = new TestCase();

	// テスト結果を格納するクラス
	TestResult result;

	// テスト実行
	test->run(result);

	return 0;
}
