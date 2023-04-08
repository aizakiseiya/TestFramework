#include <stdint.h>
#include <vector>
#include <string>

class TestResult
{
public:
	TestResult()
		: testCount_(0), failCount_(0) {} ;
	
	void		AddTestCount(uint16_t cnt) { testCount_ += cnt; };
    void		AddFailedCount(uint16_t cnt) { failCount_ += cnt; };
	void 		AddFailedMessage(std::string message) { failMesList_.push_back(message); };	
	uint16_t	GetTestCount(void) { return testCount_; };
	uint16_t 	GetFailCount(void) { return failCount_; };

private:
	uint16_t testCount_;
	uint16_t failCount_;
	std::vector<std::string> failMesList_;
};
