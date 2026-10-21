#include <runetype.h>

/* C locale classification, matching FreeBSD's _DefaultRuneLocale for 0-127.
 * Bytes 128-255 have no class, as in the C locale. */

#define A _CTYPE_A
#define C _CTYPE_C
#define D _CTYPE_D
#define G _CTYPE_G
#define L _CTYPE_L
#define P _CTYPE_P
#define S _CTYPE_S
#define U _CTYPE_U
#define X _CTYPE_X
#define B _CTYPE_B
#define R _CTYPE_R
#define W _CTYPE_SW1

#define CTRL   (C)
#define SPC    (C|S)
#define TAB    (C|S|B)
#define BLANK  (S|B|R|W)
#define PUNCT  (G|P|R|W)
#define UPHEX  (A|G|R|U|X|W)
#define UPPER  (A|G|R|U|W)
#define LOHEX  (A|G|R|L|X|W)
#define LOWER  (A|G|R|L|W)

/* FreeBSD stores the digit value in the low byte of digits' and hex digits' entries. */
#define DIG(n) (D|G|R|X|W|(n))
#define UH(n)  (UPHEX|(n))
#define LH(n)  (LOHEX|(n))

#define ID16(x) x, x+1, x+2, x+3, x+4, x+5, x+6, x+7, x+8, x+9, x+10, x+11, x+12, x+13, x+14, x+15

const _RuneLocale _DefaultRuneLocale = {
	_RUNE_MAGIC_1,
	"NONE",
	0, 0,
	0xFFFD,
	{
		/* 0x00 */ CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL,
		/* 0x08 */ CTRL, TAB, SPC, SPC, SPC, SPC, CTRL, CTRL,
		/* 0x10 */ CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL,
		/* 0x18 */ CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL, CTRL,
		/* 0x20 */ BLANK, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT,
		/* 0x28 */ PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT,
		/* 0x30 */ DIG(0), DIG(1), DIG(2), DIG(3), DIG(4), DIG(5), DIG(6), DIG(7),
		/* 0x38 */ DIG(8), DIG(9), PUNCT, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT,
		/* 0x40 */ PUNCT, UH(10), UH(11), UH(12), UH(13), UH(14), UH(15), UPPER,
		/* 0x48 */ UPPER, UPPER, UPPER, UPPER, UPPER, UPPER, UPPER, UPPER,
		/* 0x50 */ UPPER, UPPER, UPPER, UPPER, UPPER, UPPER, UPPER, UPPER,
		/* 0x58 */ UPPER, UPPER, UPPER, PUNCT, PUNCT, PUNCT, PUNCT, PUNCT,
		/* 0x60 */ PUNCT, LH(10), LH(11), LH(12), LH(13), LH(14), LH(15), LOWER,
		/* 0x68 */ LOWER, LOWER, LOWER, LOWER, LOWER, LOWER, LOWER, LOWER,
		/* 0x70 */ LOWER, LOWER, LOWER, LOWER, LOWER, LOWER, LOWER, LOWER,
		/* 0x78 */ LOWER, LOWER, LOWER, PUNCT, PUNCT, PUNCT, PUNCT, CTRL,
		/* 0x80-0xff: zero */
	},
	{
		ID16(0x00), ID16(0x10), ID16(0x20), ID16(0x30),
		0x40, 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o',
		'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
		ID16(0x60), ID16(0x70),
		ID16(0x80), ID16(0x90), ID16(0xa0), ID16(0xb0),
		ID16(0xc0), ID16(0xd0), ID16(0xe0), ID16(0xf0),
	},
	{
		ID16(0x00), ID16(0x10), ID16(0x20), ID16(0x30),
		ID16(0x40), ID16(0x50),
		0x60, 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O',
		'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
		ID16(0x80), ID16(0x90), ID16(0xa0), ID16(0xb0),
		ID16(0xc0), ID16(0xd0), ID16(0xe0), ID16(0xf0),
	},
};

const _RuneLocale *_CurrentRuneLocale = &_DefaultRuneLocale;
