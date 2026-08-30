#include <stdlib.h>
#include <wchar.h>
#include <xlocale.h>

size_t wcstombs(char *restrict s, const wchar_t *restrict ws, size_t n)
{
	return wcsrtombs(s, &(const wchar_t *){ws}, n, 0);
}

size_t wcstombs_l(char *restrict s, const wchar_t *restrict ws, size_t n, locale_t locale)
{
	return wcsrtombs(s, &(const wchar_t *){ws}, n, 0);
}