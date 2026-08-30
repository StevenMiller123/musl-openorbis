#include <wchar.h>
#include <xlocale.h>

int mbsinit(const mbstate_t *st)
{
	return !st || !*(unsigned *)st;
}

int mbsinit_l(const mbstate_t *st, locale_t locale)
{
	return !st || !*(unsigned *)st;
}
