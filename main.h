#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/* PROTOTYPES */

/* MAIN FUNCTION */
int _printf(const char *format, ...);
int (*get_op_func(const char *format))(va_list);

/* PRINT FUNCTION TYPES */

/* PRINT TEXT */
int print_char(va_list);
int print_string(va_list);
int print_rev_str(va_list);
int print_rot13(va_list);
/* PRINT NUMBERS */
int print_decimal(va_list);

/* AUX FUNCTION */
char *int_to_arg(int i, char *strout, int base);
int _putchar(char c);
void _putnum(int n);
int _strlen(char *s);
int _intlen(int i);

/* STRUCTURES */

/**
 * struct functions - hashmap structure
 * @type: argument type specified by %
 * @function: function that perfome with the specified argument
 */
typedef struct functions
{
	char *type;
	int (*function)(va_list);
} functions_t;

static const functions_t types[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_decimal},
	{"i", print_decimal},
	{"r", print_rev_str},
	{"R", print_rot13},
	{NULL, NULL}
};

#endif /* MAIN_C */
