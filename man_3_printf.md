.\" Manpage for _printf(3).
.TH man 3 "24 march 2022" "1.0" "_printf(3) man page"
.SH NAME
_printf(3) \- formatted output conversion
.SH SYNOPSIS
#include <main.h>

int edge_cases(const char *format, va_list);


.SH DESCRIPTION

The function write the output under the control of a format string that specifies how subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.
.SH Format of the format string

The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a conversion specifier.  In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.

.SH Flag characters


.SH Conversion specifiers

d, i    The int argument is converted to signed decimal notation.
        The precision, if any, gives the minimum number of digits
        that must appear; if the converted value requires fewer
        digits, it is padded on the left with zeros.  The default
        precision is 1.  When 0 is printed with an explicit
        precision 0, the output is empty.

c       If no l modifier is present, the int argument is converted
        to an unsigned char, and the resulting character is
        written.

s       Characters from the array are
        written up to (but not including) a terminating null byte
        ('\0');

r       Write a string in reverse

R       Decode string in ROT'13

%       A '%' is written.  No argument is converted.  The complete
        conversion specification is '%%'.


.SH RETURN VALUE

Upon successful return, these functions return the number of
characters printed (excluding the null byte used to end output to
strings).
.SH BUGS


.SH Conversion specifiers

d, i    This identifier print numbers fine but works with some bugs

R       This identifier decode string in ROT'13 fine but works with some bugs


.SH AUTHORS

- Santiago Bedoya (Github @santiagobedoa)

- Carlos Berrio (Github @carlosberrio)
