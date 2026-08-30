#include <wchar.h>
#include <xlocale.h>

size_t mbrlen(const char *restrict s, size_t n, mbstate_t *restrict st)
{
	static unsigned internal;
	return mbrtowc(0, s, n, st ? st : (mbstate_t *)&internal);
}

size_t mbrlen_l(const char *restrict s, size_t n, mbstate_t *restrict st, locale_t locale)
{
	static unsigned internal;
	return mbrtowc(0, s, n, st ? st : (mbstate_t *)&internal);
}
