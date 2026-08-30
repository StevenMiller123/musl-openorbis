#include "stdio_impl.h"
#include <wchar.h>
#include <xlocale.h>

wint_t putwc(wchar_t c, FILE *f)
{
	return fputwc(c, f);
}

wint_t putwc_l(wchar_t c, FILE *f, locale_t locale)
{
	return fputwc(c, f);
}
