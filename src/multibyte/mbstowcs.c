#include <stdlib.h>
#include <wchar.h>
#include <xlocale.h>

size_t mbstowcs(wchar_t *restrict ws, const char *restrict s, size_t wn)
{
	return mbsrtowcs(ws, (void*)&s, wn, 0);
}

size_t mbstowcs_l(wchar_t *restrict ws, const char *restrict s, size_t wn, locale_t locale)
{
	return mbsrtowcs(ws, (void*)&s, wn, 0);
}
