
void Mutex_init(pthread_mutex_t* mutex);

void Mutex_lock(pthread_mutex_t* mutex);

void Mutex_unlock(pthread_mutex_t* mutex);

void Cond_init(pthread_cond_t *cond);

void Cond_signal(pthread_cond_t *cond);

void Cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex);

