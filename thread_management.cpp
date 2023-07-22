//
// Created by Sourabh Jaiswal on 22/7/23.
//

#include <iostream>
#include <thread>
using namespace std;
struct Ftr {
  void operator()(string& msg) {
    cout << " From functor : " << msg << endl;
    msg = "I am done with functor tho" ;
  }
};

int main() {
  string s = "I am from main ";
  cout << this_thread::get_id() << endl;
  thread t1 ((Ftr()), std::ref(s));
  cout << t1.get_id() << endl;
  cout << " From main : " << s << endl;

  cout << thread::hardware_concurrency() << endl;
  t1.join();
  cout << endl;
  return 0;
}
