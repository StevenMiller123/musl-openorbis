#include <locale.h>
#include <xlocale.h>
#include "locale_impl.h"

/* FreeBSD: name of the lowest category set in mask */
const char *querylocale(int mask, locale_t loc)
{
	int cat;
	if (!loc) loc = C_LOCALE;
	if (loc == LC_GLOBAL_LOCALE) loc = &libc.global_locale;
	for (cat = 0; cat < LC_ALL && !(mask & (1 << cat)); cat++);
	if (cat == LC_ALL) return 0;
	return loc->cat[cat] ? loc->cat[cat]->name : "C";
}
