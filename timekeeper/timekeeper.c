#include <sys/time.h>
#include "timekeeper.h"

//wrapper for inline assembly of rdtsc instruction, x86 only
unsigned long long rdtsc(void) {
  unsigned hi, lo;
  __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
  return ( (unsigned long long) lo) | ( ((unsigned long long) hi)<<32);
}

//gettimeofday in microseconds
unsigned long long get_micros(void) {
  struct timeval mytime;
  gettimeofday(&mytime, NULL);
  return ((unsigned long long) mytime.tv_sec) * 1E6 + ((unsigned long long) mytime.tv_usec);
}

