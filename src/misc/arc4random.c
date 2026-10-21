#define _BSD_SOURCE
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>

void arc4random_buf(void *buf, size_t n)
{
	unsigned char *p = buf;
	while (n) {
		size_t len = n > 256 ? 256 : n;
		/* arc4random cannot report failure; FreeBSD never fails here either */
		if (getentropy(p, len)) abort();
		p += len;
		n -= len;
	}
}

uint32_t arc4random(void)
{
	uint32_t v;
	arc4random_buf(&v, sizeof v);
	return v;
}

uint32_t arc4random_uniform(uint32_t upper)
{
	uint32_t r, min;
	if (upper < 2) return 0;
	/* reject values below 2**32 % upper so the result is unbiased */
	min = -upper % upper;
	do r = arc4random(); while (r < min);
	return r % upper;
}
