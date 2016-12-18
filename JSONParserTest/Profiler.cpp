//
//

#include "stdafx.h"
#include "Profiler.h"

void CProfiler::start()
{
	m_startPoint = std::chrono::system_clock::now();
}

double CProfiler::end()
{
	m_endPoint = std::chrono::system_clock::now();

	std::chrono::duration<double> duration = m_endPoint - m_startPoint;

	return duration.count();
}