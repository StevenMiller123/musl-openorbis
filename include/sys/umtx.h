#ifndef _SYS_UMTX_H
#define _SYS_UMTX_H

#ifdef __cplusplus
extern "C" {
#endif

#define UMTX_OP_RESERVED0        0
#define UMTX_OP_RESERVED1        1
#define UMTX_OP_WAIT             2
#define UMTX_OP_WAKE             3
#define UMTX_OP_MUTEX_TRYLOCK    4
#define UMTX_OP_MUTEX_LOCK       5
#define UMTX_OP_MUTEX_UNLOCK     6
#define UMTX_OP_SET_CEILING      7
#define UMTX_OP_CV_WAIT          8
#define UMTX_OP_CV_SIGNAL        9
#define UMTX_OP_CV_BROADCAST     10
#define UMTX_OP_WAIT_UINT        11
#define UMTX_OP_RW_RDLOCK        12
#define UMTX_OP_RW_WRLOCK        13
#define UMTX_OP_RW_UNLOCK        14
#define UMTX_OP_WAIT_UINT_PRIVATE 15
#define UMTX_OP_WAKE_PRIVATE     16
#define UMTX_OP_MUTEX_WAIT       17
#define UMTX_OP_SEM_WAIT         19
#define UMTX_OP_SEM_WAKE         20
#define UMTX_OP_NWAKE_PRIVATE    21
#define UMTX_OP_MUTEX_WAKE2      22

int _umtx_op(void *, int, unsigned long, void *, void *);

#ifdef __cplusplus
}
#endif

#endif
