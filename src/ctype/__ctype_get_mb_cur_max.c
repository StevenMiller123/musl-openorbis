#include <stdlib.h>
#include "locale_impl.h"
#include <xlocale.h>

size_t __ctype_get_mb_cur_max()
{
	return MB_CUR_MAX;
}

size_t __ctype_get_mb_cur_max_l(locale_t locale)
{
	return MB_CUR_MAX;
}