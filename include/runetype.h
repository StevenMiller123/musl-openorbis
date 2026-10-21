#ifndef _RUNETYPE_H
#define _RUNETYPE_H

#ifdef __cplusplus
extern "C" {
#endif

#define __NEED_size_t
#include <bits/alltypes.h>

#include <_ctype.h>

#define _CACHED_RUNES (1 << 8)
#define _CRMASK       (~(_CACHED_RUNES - 1))
#define _RUNE_MAGIC_1 "RuneMagi"

typedef int __rune_t;

typedef struct {
	__rune_t __min;
	__rune_t __max;
	__rune_t __map;
	unsigned long *__types;
} _RuneEntry;

typedef struct {
	int __nranges;
	_RuneEntry *__ranges;
} _RuneRange;

typedef struct {
	char __magic[8];
	char __encoding[32];

	__rune_t (*__sgetrune)(const char *, size_t, char const **);
	int (*__sputrune)(__rune_t, char *, size_t, char **);
	__rune_t __invalid_rune;

	unsigned long __runetype[_CACHED_RUNES];
	__rune_t __maplower[_CACHED_RUNES];
	__rune_t __mapupper[_CACHED_RUNES];

	_RuneRange __runetype_ext;
	_RuneRange __maplower_ext;
	_RuneRange __mapupper_ext;

	void *__variable;
	int __variable_len;
} _RuneLocale;

extern const _RuneLocale _DefaultRuneLocale;
extern const _RuneLocale *_CurrentRuneLocale;

#ifdef __cplusplus
}
#endif

#endif
