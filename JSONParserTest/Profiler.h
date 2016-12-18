#pragma once


class CProfiler
{
public:
	void start();
	double end();

private:
	std::chrono::time_point<std::chrono::system_clock> m_startPoint, m_endPoint;
};