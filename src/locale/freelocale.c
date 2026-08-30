#include <stdlib.h>
#include "locale_impl.h"

int freelocale(locale_t l)
{
	if (__loc_is_allocated(l)) free(l);
	return 0;
}

weak_alias(freelocale, __freelocale);
