#include <stdio.h>
#include <stdarg.h>
#include <xlocale.h>

int fscanf(FILE *restrict f, const char *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vfscanf(f, fmt, ap);
	va_end(ap);
	return ret;
}

int fscanf_l(FILE *restrict f, locale_t, const char *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vfscanf(f, fmt, ap);
	va_end(ap);
	return ret;
}

weak_alias(fscanf, __isoc99_fscanf);
