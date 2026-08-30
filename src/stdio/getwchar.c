#include "stdio_impl.h"
#include <wchar.h>
#include <xlocale.h>

wint_t getwchar(void)
{
	return fgetwc(stdin);
}

wint_t getwchar_l(locale_t)
{
	return fgetwc(stdin);
}

weak_alias(getwchar, getwchar_unlocked);
