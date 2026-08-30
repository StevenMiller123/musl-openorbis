#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include "internal.h"
#include <xlocale.h>

int wctob(wint_t c)
{
	if (c < 128U) return c;
	if (MB_CUR_MAX==1 && IS_CODEUNIT(c)) return (unsigned char)c;
	return EOF;
}

int wctob_l(wint_t c, locale_t locale)
{
	if (c < 128U) return c;
	if (MB_CUR_MAX==1 && IS_CODEUNIT(c)) return (unsigned char)c;
	return EOF;
}
