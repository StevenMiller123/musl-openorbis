#ifndef _SYS_SYSCTL_H
#define _SYS_SYSCTL_H

/* FreeBSD sysctl interface. On PS4, sysctl and sysctlbyname are provided by libkernel. */

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_size_t
#include <bits/alltypes.h>

#define CTL_MAXNAME     24

#define CTL_UNSPEC      0
#define CTL_KERN        1
#define CTL_VM          2
#define CTL_VFS         3
#define CTL_NET         4
#define CTL_DEBUG       5
#define CTL_HW          6
#define CTL_MACHDEP     7
#define CTL_USER        8
#define CTL_P1003_1B    9

#define KERN_OSTYPE     1
#define KERN_OSRELEASE  2
#define KERN_OSREV      3
#define KERN_VERSION    4
#define KERN_MAXVNODES  5
#define KERN_MAXPROC    6
#define KERN_MAXFILES   7
#define KERN_ARGMAX     8
#define KERN_SECURELVL  9
#define KERN_HOSTNAME   10
#define KERN_HOSTID     11
#define KERN_CLOCKRATE  12
#define KERN_PROC       14
#define KERN_BOOTTIME   21
#define KERN_OSRELDATE  24
#define KERN_USRSTACK   33
#define KERN_ARND       37

#define KERN_PROC_ALL   0
#define KERN_PROC_PID   1

#define HW_MACHINE      1
#define HW_MODEL        2
#define HW_NCPU         3
#define HW_BYTEORDER    4
#define HW_PHYSMEM      5
#define HW_USERMEM      6
#define HW_PAGESIZE     7
#define HW_MACHINE_ARCH 11
#define HW_REALMEM      12

int sysctl(const int *, unsigned int, void *, size_t *, const void *, size_t);
int sysctlbyname(const char *, void *, size_t *, const void *, size_t);

#ifdef __cplusplus
}
#endif

#endif
