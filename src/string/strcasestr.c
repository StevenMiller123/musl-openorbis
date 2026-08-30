#define _GNU_SOURCE
#include <string.h>
#include <xlocale.h>

char *strcasestr(const char *h, const char *n)
{
	size_t l = strlen(n);
	for (; *h; h++) if (!strncasecmp(h, n, l)) return (char *)h;
	return 0;
}

char *strcasestr_l(const char *h, const char *n, locale_t locale)
{
	return strcasestr(h, n);
}