//
// Created by Sourabh Jaiswal on 21/7/23.
//
#include <iostream>
#include <thread>

#include "Timer.h"
using namespace std;

void function1() {
  std::cout << "I am function 1" << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}

void function2() {
  std::cout << "I am function 2" << std::endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

int main() {
  Timer timer;

  // function1();
  // function2();
  thread t1 = thread(function1);
  thread t2 = thread(function2);
  t2.join();
  t1.join();
  timer.DisplayTime();
  return 0;
}