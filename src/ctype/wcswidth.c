#include <wchar.h>
#include <xlocale.h>

int wcswidth(const wchar_t *wcs, size_t n)
{
	int l=0, k=0;
	for (; n-- && *wcs && (k = wcwidth(*wcs)) >= 0; l+=k, wcs++);
	return (k < 0) ? k : l;
}

int wcswidth_l(const wchar_t *wcs, size_t n, locale_t)
{
	int l=0, k=0;
	for (; n-- && *wcs && (k = wcwidth(*wcs)) >= 0; l+=k, wcs++);
	return (k < 0) ? k : l;
}