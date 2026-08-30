#include <stdlib.h>
#include <xlocale.h>

double atof(const char *s)
{
	return strtod(s, 0);
}

double atof_l(const char *s, locale_t)
{
	return strtod(s, 0);
}