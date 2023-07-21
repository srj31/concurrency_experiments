//
// Created by Sourabh Jaiswal on 21/7/23.
//
#include "Timer.h"

Timer::Timer() {
  Timer::StartTimer();
}

void Timer::StartTimer() {
  cur_time_ = clock::now();
}

void Timer::DisplayTime() {
  std::cout << "Time elapsed (in ms): "
            << std::chrono::duration_cast<std::chrono::milliseconds>(clock::now() - cur_time_).count() << std::endl;
}
