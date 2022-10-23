#pragma once
#include <chrono>

class FrameTimer
{
public:
	FrameTimer();
	float get_elapsed();
private:
	std::chrono::steady_clock clock;
	std::chrono::steady_clock::time_point last_time;
};