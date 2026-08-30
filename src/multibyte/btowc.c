#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include "internal.h"
#include <xlocale.h>

wint_t btowc(int c)
{
	int b = (unsigned char)c;
	return b<128U ? b : (MB_CUR_MAX==1 && c!=EOF) ? CODEUNIT(c) : WEOF;
}

wint_t btowc_l(int c, locale_t locale)
{
	int b = (unsigned char)c;
	return b<128U ? b : (MB_CUR_MAX==1 && c!=EOF) ? CODEUNIT(c) : WEOF;
}