# 0x11. C - printf

## _printf
  This projects seeks to make a pseudo-recreation of the C standard library function, printf.

## Description
  _printf writes output to standard output. It writes the output under the control of a format string that specifies how subsequent argumnets (accessed via the variable-length argument facilities of stdarg) are converted for output.

## Return Value
  Upon success, _printf returns the number o characters printed (excluding the terminating null byte used to end output to strings). If an output error is encountered, the function returns -1.

## Format of the Argument String
  The format string argument is a constant character string composed of zero or more directives: ordinary characters (not %) which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Conversion specification is introduced by the character % and ends with a conversion specifier. The arguments must correspind with the conversion specifier, and are used in the order given.

## Conversion Specifiers
  The conversion specifier, introduced by the character %, is a character that specifies the type of conversion to be applied. These are the ones we used:
- d, i
* The `int` argument is covered to signed decimal notation.
- c
* The `int` argument is converted to an `unsigned char`.
- s
* The `const char *` argument is expected to be a pointer to a character array (aka. pointer to a string). Characters from the array are written starting from the first element of the array and ending at, but not including, the terminating null byte (`\0`).
- %
* A `%` is written. No argument is converted. The complete conversion specification is %%.

## Example
  To print the address of Google LLC in the format "1600 Amphitheatre Parkway, Mountain View, California, U.S." where _street_, _city_, _state_ and _country_ are pointers to strings:
> `#include "holberton.h"`
>
> `int main(void)`
>
> `char *street = "Amphitheatre Parkway", *city = "Mountain View", *state = "Carlifornia", *country = "U.S.";`
>
> `printf("%d %s, %s, %s %s\n", 1600, street, city, state, country);`

Output in terminal:

> `~$ 1600 Amphitheatre Parkway, Mountain View, California, U.S.`

## Authors
* Attari Ruby - ALX SE Student 0621
* Munyiri Annette - ALX SE Student 0621
