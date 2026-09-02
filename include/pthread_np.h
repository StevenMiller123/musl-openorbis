#ifndef _PTHREAD_NP_H
#define _PTHREAD_NP_H

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_struct_timespec
#define __NEED_pthread_t
#define __NEED_pthread_attr_t
#define __NEED_size_t

#include <bits/alltypes.h>

struct cpu_set_t;
int pthread_getaffinity_np(pthread_t, size_t, struct cpu_set_t *);
int pthread_setaffinity_np(pthread_t, size_t, const struct cpu_set_t *);
int pthread_attr_get_np(pthread_t, pthread_attr_t *);
int pthread_getname_np(pthread_t, char*);
int pthread_set_name_np(pthread_t, const char *);
#define pthread_getattr_np pthread_attr_get_np
#define pthread_setname_np pthread_set_name_np
int pthread_getattr_default_np(pthread_attr_t *);
int pthread_setattr_default_np(const pthread_attr_t *);
int pthread_tryjoin_np(pthread_t, void **);
int pthread_timedjoin_np(pthread_t, void **, const struct timespec *);
int pthread_getthreadid_np();

#if _REDIR_TIME64
#ifdef _GNU_SOURCE
__REDIR(pthread_timedjoin_np, __pthread_timedjoin_np_time64);
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif