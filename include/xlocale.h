#ifndef _XLOCALE_H
#define _XLOCALE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <locale.h>
#include <bits/alltypes.h>

const char *querylocale(int, locale_t);

#ifdef _STRING_H
char *strcasestr_l(const char *, const char *, locale_t);
#endif

#ifdef _INTTYPES_H
intmax_t strtoimax_l(const char *, char **, int, locale_t);
uintmax_t strtoumax_l(const char *, char **, int, locale_t);
intmax_t wcstoimax_l(const wchar_t *, wchar_t **, int, locale_t);
uintmax_t wcstoumax_l(const wchar_t *, wchar_t **, int, locale_t);
#endif

#ifdef _MONETARY_H
// everything supposed to be here is already defined in monetary.h
#endif

#ifdef _STDLIB_H
double atof_l(const char *, locale_t);
int atoi_l(const char *, locale_t);
long atol_l(const char *, locale_t);
long long atoll_l(const char *, locale_t);
int mblen_l(const char *, size_t, locale_t);
size_t mbstowcs_l(wchar_t *, const char *, size_t, locale_t);
int mbtowc_l(wchar_t *, const char *, size_t, locale_t);
long strtol_l(const char *, char **, int, locale_t);
long long strtoll_l(const char*, char **, int, locale_t);
unsigned long strtoul_l(const char *, char **, int, locale_t);
unsigned long long strtoull_l(const char *, char **, int, locale_t);
size_t wcstombs_l(char *, const wchar_t *, size_t, locale_t);
int wctomb_l(char *, wchar_t, locale_t);
size_t __ctype_get_mb_cur_max_l(locale_t);
#define MB_CUR_MAX_L(x) (__ctype_get_mb_cur_max_l(x))
#endif

#ifdef _TIME_H
char *strptime_l(const char *, const char *, struct tm *, locale_t);
#endif

#ifdef _LANGINFO_H
// everything supposed to be here is already defined in langinfo.h
#endif

#ifdef _CTYPE_H
// TODO: runes? nextwctype? digittoint?
// Excluding todos, everything supposed to be here is already defined in ctype.h
#endif

#ifdef _WCTYPE_H
// TODO: runes? nextwctype? digittoint?
// Excluding todos, everything supposed to be here is already defined in ctype.h
#endif

#ifdef _STDIO_H
int asprintf_l(char **, locale_t, const char *, ...);
int dprintf_l(int, locale_t, const char *, ...);
int fprintf_l(FILE *, locale_t, const char *, ...);
int fscanf_l(FILE *, locale_t, const char *, ...);
int printf_l(locale_t, const char *, ...);
int scanf_l(locale_t, const char *, ...);
int snprintf_l(char *, size_t, locale_t, const char *, ...);
int sprintf_l(char *, locale_t, const char *, ...);
int sscanf_l(const char *, locale_t, const char *, ...);
int vfprintf_l(FILE *, locale_t, const char *, __isoc_va_list);
int vprintf_l(locale_t, const char *, __isoc_va_list);
int vsprintf_l(char *, locale_t, const char *, __isoc_va_list);
int vfscanf_l(FILE *, locale_t, const char *, __isoc_va_list);
int vscanf_l(locale_t, const char *, __isoc_va_list);
int vsnprintf_l(char *, size_t, locale_t, const char *, __isoc_va_list);
int vsscanf_l(const char *, locale_t, const char *, __isoc_va_list);
int vdprintf_l(int, locale_t, const char *, __isoc_va_list);
int vasprintf_l(char **, locale_t, const char *, __isoc_va_list);
#endif

#ifdef _WCHAR_H
wint_t btowc_l(int, locale_t);
wint_t fgetwc_l(FILE *, locale_t);
wchar_t *fgetws_l(wchar_t *, int, FILE *, locale_t);
wint_t fputwc_l(wchar_t, FILE *, locale_t);
int fputws_l(const wchar_t *, FILE *, locale_t);
int fwprintf_l(FILE *, locale_t, const wchar_t *, ...);
int fwscanf_l(FILE *, locale_t, const wchar_t *, ...);
wint_t getwc_l(FILE *, locale_t);
wint_t getwchar_l(locale_t);
size_t mbrlen_l(const char *, size_t, mbstate_t *, locale_t);
size_t mbrtowc_l(wchar_t *, const char *, size_t, mbstate_t *, locale_t);
int mbsinit_l(const mbstate_t *, locale_t);
size_t mbsrtowcs_l(wchar_t *, const char **, size_t, mbstate_t *, locale_t);
wint_t putwc_l(wchar_t, FILE *, locale_t);
wint_t putwchar_l(wchar_t, locale_t);
int swprintf_l(wchar_t *, size_t n, locale_t, const wchar_t *, ...);
int swscanf_l(const wchar_t *, locale_t, const wchar_t *, ...);
wint_t ungetwc_l(wint_t, FILE *, locale_t);
int vfwprintf_l(FILE *, locale_t, const wchar_t *, __isoc_va_list);
int vswprintf_l(wchar_t *, size_t n, locale_t, const wchar_t *, __isoc_va_list);
int vwprintf_l(locale_t, const wchar_t *, __isoc_va_list);
size_t wcrtomb_l(char *, wchar_t, mbstate_t *, locale_t);
size_t wcsrtombs_l(char *, const wchar_t **, size_t, mbstate_t *, locale_t);
double wcstod_l(const wchar_t *, wchar_t **, locale_t);
long wcstol_l(const wchar_t *, wchar_t **, int, locale_t);
unsigned long wcstoul_l(const wchar_t *, wchar_t **, int, locale_t);
int wcswidth_l(const wchar_t *, size_t, locale_t);
int wctob_l(wint_t, locale_t);
int wcwidth_l(wchar_t, locale_t);
int wprintf_l(locale_t, const wchar_t *, ...);
int wscanf_l(locale_t, const wchar_t *, ...);
int vfwscanf_l(FILE *, locale_t, const wchar_t *, __isoc_va_list);
int vswscanf_l(const wchar_t *, locale_t, const wchar_t *, __isoc_va_list);
int vwscanf_l(locale_t, const wchar_t *, __isoc_va_list);
float wcstof_l(const wchar_t *, wchar_t **, locale_t);
long double wcstold_l(const wchar_t *, wchar_t **, locale_t);
long long wcstoll_l(const wchar_t *, wchar_t **, int, locale_t);
unsigned long long wcstoull_l(const wchar_t *, wchar_t **, int, locale_t);
size_t mbsnrtowcs_l(wchar_t *, const char **, size_t, size_t, mbstate_t *, locale_t);
size_t wcsnrtombs_l(char *, const wchar_t **, size_t, size_t, mbstate_t *, locale_t);
#endif

struct lconv *localeconv_l(locale_t);

#ifdef __cplusplus
}
#endif

#endif