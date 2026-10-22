#include <errno.h>
#include <sys/mman.h>

#include "libc.h"

int getpagesize(size_t pagesize[], int nelem)
{
	if (nelem < 0 || (nelem > 0 && pagesize == NULL)) {
        errno = EINVAL;
        return -1;
    }
    pagesize[0] = PAGE_SIZE;
    return 1;
}
