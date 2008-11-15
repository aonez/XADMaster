/* this is included from filename.c, do not include directly */
#ifndef XADMASTER_CS_ATARIST_TO_UNICODE_C
#define XADMASTER_CS_ATARIST_TO_UNICODE_C

/*  $Id: cs_atarist_to_unicode.c,v 1.5 2005/06/23 14:54:37 stoecker Exp $
    Character set conversion from Atari ST (US) to Unicode

    XAD library system for archive handling
    Copyright (C) 1998 and later by Dirk St�cker <soft@dstoecker.de>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

static const xadUINT16 atarist[] = {
0x00C7, /* LATIN CAPITAL LETTER C WITH CEDILLA */
0x00FC, /* LATIN SMALL LETTER U WITH DIAERESIS */
0x00E9, /* LATIN SMALL LETTER E WITH ACUTE */
0x00E2, /* LATIN SMALL LETTER A WITH CIRCUMFLEX */
0x00E4, /* LATIN SMALL LETTER A WITH DIAERESIS */
0x00E0, /* LATIN SMALL LETTER A WITH GRAVE */
0x00E5, /* LATIN SMALL LETTER A WITH RING ABOVE */
0x00E7, /* LATIN SMALL LETTER C WITH CEDILLA */
0x00EA, /* LATIN SMALL LETTER E WITH CIRCUMFLEX */
0x00EB, /* LATIN SMALL LETTER E WITH DIAERESIS */
0x00E8, /* LATIN SMALL LETTER E WITH GRAVE  */
0x00EF, /* LATIN SMALL LETTER I WITH DIAERESIS */
0x00EE, /* LATIN SMALL LETTER I WITH CIRCUMFLEX */
0x00EC, /* LATIN SMALL LETTER I WITH GRAVE */
0x00C4, /* LATIN CAPITAL LETTER A WITH DIAERESIS */
0x00C5, /* LATIN CAPITAL LETTER A WITH RING ABOVE */
0x00C9, /* LATIN CAPITAL LETTER E WITH ACUTE */
0x00E6, /* LATIN SMALL LETTER AE */
0x00C6, /* LATIN CAPITAL LETTER AE */
0x00F4, /* LATIN SMALL LETTER O WITH CIRCUMFLEX */
0x00F6, /* LATIN SMALL LETTER O WITH DIAERESIS */
0x00F2, /* LATIN SMALL LETTER O WITH GRAVE */
0x00FB, /* LATIN SMALL LETTER U WITH CIRCUMFLEX */
0x00F9, /* LATIN SMALL LETTER U WITH GRAVE */
0x00FF, /* LATIN SMALL LETTER Y WITH DIAERESIS */
0x00D6, /* LATIN CAPITAL LETTER O WITH DIAERESIS */
0x00DC, /* LATIN CAPITAL LETTER U WITH DIAERESIS */
0x00A2, /* CENT SIGN */
0x00A3, /* POUND SIGN */
0x00A5, /* YEN SIGN */
0x00DF, /* LATIN SMALL LETTER SHARP S (German) */
0x0192, /* LATIN SMALL LETTER F WITH HOOK  */
0x00E1, /* LATIN SMALL LETTER A WITH ACUTE */
0x00ED, /* LATIN SMALL LETTER I WITH ACUTE */
0x00F3, /* LATIN SMALL LETTER O WITH ACUTE */
0x00FA, /* LATIN SMALL LETTER U WITH ACUTE */
0x00F1, /* LATIN SMALL LETTER N WITH TILDE */
0x00D1, /* LATIN CAPITAL LETTER N WITH TILDE */
0x00AA, /* FEMININE ORDINAL INDICATOR */
0x00BA, /* MASCULINE ORDINAL INDICATOR */
0x00BF, /* INVERTED QUESTION MARK */
0x2310, /* REVERSED NOT SIGN  */
0x00AC, /* NOT SIGN */
0x00BD, /* VULGAR FRACTION ONE HALF */
0x00BC, /* VULGAR FRACTION ONE QUARTER */
0x00A1, /* INVERTED EXCLAMATION MARK */
0x00AB, /* LEFT-POINTING DOUBLE ANGLE QUOTATION MARK */
0x00BB, /* RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK */
0x00E3, /* LATIN SMALL LETTER A WITH TILDE */
0x00F5, /* LATIN SMALL LETTER O WITH TILDE */
0x00D8, /* LATIN CAPITAL LETTER O WITH STROKE */
0x00F8, /* LATIN SMALL LETTER O WITH STROKE */
0x0153, /* LATIN SMALL LIGATURE OE */
0x0152, /* LATIN CAPITAL LIGATURE OE */
0x00C0, /* LATIN CAPITAL LETTER A WITH GRAVE */
0x00C3, /* LATIN CAPITAL LETTER A WITH TILDE */
0x00D5, /* LATIN CAPITAL LETTER O WITH TILDE */
0x00A8, /* DIAERESIS */
0x00B4, /* ACUTE ACCENT */
0x2020, /* DAGGER */
0x00B6, /* PILCROW SIGN */
0x00A9, /* COPYRIGHT SIGN */
0x00AE, /* REGISTERED SIGN */
0x2122, /* TRADE MARK SIGN */
0x0133, /* LATIN SMALL LIGATURE IJ */
0x0132, /* LATIN CAPITAL LIGATURE IJ */
0x05D0, /* HEBREW LETTER ALEF */
0x05D1, /* HEBREW LETTER BET */
0x05D2, /* HEBREW LETTER GIMEL */
0x05D3, /* HEBREW LETTER DALET */
0x05D4, /* HEBREW LETTER HE */
0x05D5, /* HEBREW LETTER VAV */
0x05D6, /* HEBREW LETTER ZAYIN */
0x05D7, /* HEBREW LETTER HET */
0x05D8, /* HEBREW LETTER TET */
0x05D9, /* HEBREW LETTER YOD */
0x05DB, /* HEBREW LETTER KAF */
0x05DC, /* HEBREW LETTER LAMED */
0x05DE, /* HEBREW LETTER MEM */
0x05E0, /* HEBREW LETTER NUN */
0x05E1, /* HEBREW LETTER SAMEKH */
0x05E2, /* HEBREW LETTER AYIN */
0x05E4, /* HEBREW LETTER PE */
0x05E6, /* HEBREW LETTER TSADI */
0x05E7, /* HEBREW LETTER QOF */
0x05E8, /* HEBREW LETTER RESH */
0x05E9, /* HEBREW LETTER SHIN */
0x05EA, /* HEBREW LETTER TAV */
0x05DF, /* HEBREW LETTER FINAL NUN */
0x05DA, /* HEBREW LETTER FINAL KAF */
0x05DD, /* HEBREW LETTER FINAL MEM */
0x05E3, /* HEBREW LETTER FINAL PE */
0x05E5, /* HEBREW LETTER FINAL TSADI */
0x00A7, /* SECTION SIGN */
0x2038, /* CARET */
0x221E, /* INFINITY */
0x03B1, /* GREEK SMALL LETTER ALPHA */
0x03B2, /* GREEK SMALL LETTER BETA */
0x0393, /* GREEK CAPITAL LETTER GAMMA */
0x03C0, /* GREEK SMALL LETTER PI */
0x03A3, /* GREEK CAPITAL LETTER SIGMA */
0x03C3, /* GREEK SMALL LETTER SIGMA */
0x00B5, /* MICRO SIGN */
0x03C4, /* GREEK SMALL LETTER TAU */
0x03A6, /* GREEK CAPITAL LETTER PHI */
0x03B8, /* GREEK SMALL LETTER THETA */
0x03A9, /* GREEK CAPITAL LETTER OMEGA */
0x03B4, /* GREEK SMALL LETTER DELTA */
0x222E, /* CONTOUR INTEGRAL */
0x03C6, /* GREEK SMALL LETTER PHI */
0x03B5, /* GREEK SMALL LETTER EPSILON */
0x2229, /* INTERSECTION */
0x2261, /* IDENTICAL TO */
0x00B1, /* PLUS-MINUS SIGN */
0x2265, /* GREATER-THAN OR EQUAL TO */
0x2264, /* LESS-THAN OR EQUAL TO */
0x2320, /* TOP HALF INTEGRAL */
0x2321, /* BOTTOM HALF INTEGRAL */
0x00F7, /* DIVISION SIGN */
0x2248, /* ALMOST EQUAL TO */
0x00B0, /* DEGREE SIGN */
0x2219, /* BULLET OPERATOR */
0x00B7, /* MIDDLE DOT */
0x221A, /* SQUARE ROOT */
0x207F, /* SUPERSCRIPT LATIN SMALL LETTER N */
0x00B2, /* SUPERSCRIPT TWO */
0x00B3, /* SUPERSCRIPT THREE */
0x00AF  /* MACRON */
};

static xadUINT16 atarist_to_unicode(xadUINT16 i)
{
    if (i > 0x7F)
        i = atarist[i-0x80];

    return i;
}

#endif /* XADMASTER_CS_ATARIST_TO_UNICODE_C */
