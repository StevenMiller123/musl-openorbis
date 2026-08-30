#include <stdio.h>
#include <stdarg.h>
#include <xlocale.h>

int vscanf(const char *restrict fmt, va_list ap)
{
	return vfscanf(stdin, fmt, ap);
}

int vscanf_l(locale_t locale, const char *restrict fmt, va_list ap)
{
	return vfscanf(stdin, fmt, ap);
}

weak_alias(vscanf,__isoc99_vscanf);
