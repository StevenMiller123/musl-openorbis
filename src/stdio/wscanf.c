#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>
#include <xlocale.h>

int wscanf(const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vwscanf(fmt, ap);
	va_end(ap);
	return ret;
}

int wscanf_l(locale_t, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vwscanf(fmt, ap);
	va_end(ap);
	return ret;
}

weak_alias(wscanf,__isoc99_wscanf);
