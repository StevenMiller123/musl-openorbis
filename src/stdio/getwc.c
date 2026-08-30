#include "stdio_impl.h"
#include <wchar.h>
#include <xlocale.h>

wint_t getwc(FILE *f)
{
	return fgetwc(f);
}

wint_t getwc_l(FILE *f, locale_t locale)
{
	return fgetwc(f);
}
