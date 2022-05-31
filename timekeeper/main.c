#include <stdio.h>
#include "timekeeper.h"

//testing functions
int main(int argc, char *argv[]) {

  printf("gettimeofday in usec: %llu\n", get_micros());
  printf("rdtsc counter: %llu\n", rdtsc());

}
