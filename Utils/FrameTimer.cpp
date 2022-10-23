#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	last_time = clock.now();
}

float FrameTimer::get_elapsed()
{
	const auto ret = std::chrono::duration<float>(clock.now() - last_time);
	last_time = clock.now();
	return ret.count();
}