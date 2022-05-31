#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/time.h>


static __inline__ unsigned long long rdtsc(void) {
  unsigned hi, lo;
  __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
  return ( (unsigned long long) lo) | ( ((unsigned long long) hi)<<32);
}

unsigned long long get_micros(void) {
  struct timeval mytime;
  gettimeofday(&mytime, NULL);
  return ((unsigned long long) mytime.tv_sec) * 1E6 + ((unsigned long long) mytime.tv_usec);
}

int main(int argc, char *argv[]) {

  printf("gettimeofday in usec: %llu\n", get_micros());
  printf("rdtsc counter: %llu\n", rdtsc());
}
