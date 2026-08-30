#include <stdio.h>
#include <wchar.h>
#include <xlocale.h>

int vwprintf(const wchar_t *restrict fmt, va_list ap)
{
	return vfwprintf(stdout, fmt, ap);
}

int vwprintf_l(locale_t, const wchar_t *restrict fmt, va_list ap)
{
	return vfwprintf(stdout, fmt, ap);
}
