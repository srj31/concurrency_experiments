//
// Created by Sourabh Jaiswal on 22/7/23.
//
#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mu;

void shared_print(string&& msg, int id) {
  std::lock_guard<std::mutex> guard(mu); // RAII to ensure even if there is an exception
  // once the guard is out of scope it will call unlock on mu;

  //mu.lock(); // lock the std::cout to make sure there is no printing in the same line
  // cout is global, so it is not actually thread safe here
  cout << msg << id << endl;
  //mu.unlock();
}

void function1() {
  for(int i =0 ;i > -100; i--)
    shared_print("From f1: ", i);
}

int main() {
  std::thread t1(function1);

  for(int i =0 ;i < 100;i++)
    shared_print("From main: ", i);

  t1.join();
  return 0;
}
