#include <pthread.h>
#include <assert.h>
#include "wrappers.h"


void Mutex_init(pthread_mutex_t* mutex) {
  int rc = pthread_mutex_init(mutex, NULL);
  assert(rc == 0);
}

void Mutex_lock(pthread_mutex_t* mutex) {
  int rc = pthread_mutex_lock(mutex);
  assert(rc == 0);
}

void Mutex_unlock(pthread_mutex_t* mutex) {
  int rc = pthread_mutex_unlock(mutex);
  assert(rc == 0);
}

void Cond_init(pthread_cond_t *cond) {
  int rc = pthread_cond_init(cond, NULL);
  assert(rc == 0);
}

void Cond_signal(pthread_cond_t *cond) {
  int rc = pthread_cond_signal(cond);
  assert(rc == 0);
}

void Cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex) {
  int rc = pthread_cond_wait(cond, mutex);
  assert(rc == 0);
}

