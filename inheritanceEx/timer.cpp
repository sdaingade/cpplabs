// timer.cpp: implementation of the timer class.
//
//////////////////////////////////////////////////////////////////////

#include "timer.h"
#include <iostream>
#include <string>

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Timer::Timer(std::string n) : name(n) {
   time = GetTickCount();
}

Timer::~Timer() {
   DWORD time2 = GetTickCount();
   cout << name.data() << (time2 - time) << endl;
}