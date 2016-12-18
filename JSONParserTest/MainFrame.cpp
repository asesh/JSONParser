//
//

#include "stdafx.h"
#include "Profiler.h"

int main(int nArgCount, wchar_t **pszArgVars)
{
	CProfiler profiler;
	profiler.start();

	testing::InitGoogleTest(&nArgCount, pszArgVars);

	int nResult = RUN_ALL_TESTS();

	double dDuration = profiler.end();

	std::cout << "\nIt took: " << dDuration << " to finish this test" << std::endl;

	::system("pause");

	return nResult;
}

