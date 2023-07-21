//
// Created by Sourabh Jaiswal on 21/7/23.
//
#ifndef CONCURRENCY_EXPERIMENTS__TIMER_H_
#define CONCURRENCY_EXPERIMENTS__TIMER_H_
#include <iostream>
#include <chrono>

class Timer {
  using clock = std::chrono::system_clock;
  using timepoint = std::chrono::time_point<clock>;
 public:
  Timer();
  void StartTimer();
  void DisplayTime();
 private:
  timepoint cur_time_;
};
#endif //CONCURRENCY_EXPERIMENTS__TIMER_H_
