#include "stdio_impl.h"
#include <xlocale.h>

int vdprintf(int fd, const char *restrict fmt, va_list ap)
{
	FILE f = {
		.fd = fd, .lbf = EOF, .write = __stdio_write,
		.buf = (void *)fmt, .buf_size = 0,
		.lock = -1
	};
	return vfprintf(&f, fmt, ap);
}

int vdprintf_l(int fd, locale_t, const char *restrict fmt, va_list ap)
{
	return vdprintf(fd, fmt, ap);
}