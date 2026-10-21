#include <sys/random.h>
#include <errno.h>
#include "syscall.h"
#ifdef PS4
#include <sys/sysctl.h>
#endif

ssize_t getrandom(void *buf, size_t buflen, unsigned flags)
{
#ifndef PS4
	return syscall_cp(SYS_getrandom, buf, buflen, flags);
#else
	/* FreeBSD's kern.arandom, from libkernel; it returns at most 256 bytes per call */
	int mib[2] = { CTL_KERN, KERN_ARND };
	size_t done = 0;
	while (done < buflen) {
		size_t len = buflen - done;
		if (len > 256) len = 256;
		/* libkernel sets its own errno, not musl's */
		if (sysctl(mib, 2, (char *)buf + done, &len, 0, 0) != 0 || !len) {
			if (done) break;
			errno = EIO;
			return -1;
		}
		done += len;
	}
	return done;
#endif
}
