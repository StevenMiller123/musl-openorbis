#include <stdlib.h>
#include <wchar.h>
#include <xlocale.h>

int wctomb(char *s, wchar_t wc)
{
	if (!s) return 0;
	return wcrtomb(s, wc, 0);
}

int wctomb_l(char *s, wchar_t wc, locale_t)
{
	if (!s) return 0;
	return wcrtomb(s, wc, 0);
}
