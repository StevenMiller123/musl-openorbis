#include <stdlib.h>
#include <xlocale.h>

int mblen(const char *s, size_t n)
{
	return mbtowc(0, s, n);
}

int mblen_l(const char *s, size_t n, locale_t locale)
{
	return mbtowc(0, s, n);
}
