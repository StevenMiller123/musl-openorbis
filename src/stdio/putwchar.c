#include "stdio_impl.h"
#include <wchar.h>
#include <xlocale.h>

wint_t putwchar(wchar_t c)
{
	return fputwc(c, stdout);
}

wint_t putwchar_l(wchar_t c, locale_t)
{
	return fputwc(c, stdout);
}

weak_alias(putwchar, putwchar_unlocked);
