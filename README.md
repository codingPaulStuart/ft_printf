# ft_printf - Reverse Engineer of the C printf function

Recreating the versatile C function:printf() helped to understand how variadic functions work, a very useful skill to have.
The Printf recreated function is to work same as the original one in the standard library. It is tested and compared to the original and must implement the following conversions:

• %c Prints a single character.

• %s Prints a string (as defined by the commonCconvention).

• %p Thevoid *pointer argument has to be printed in hexadecimal format.

• %d Prints a decimal (base 10) number.

• %i Prints an integer in base 10.

• %u Prints an unsigned decimal (base 10) number.

• %x Prints a number in hexadecimal (base 16) lowercase format.

• %X Prints a number in hexadecimal (base 16) uppercase format.

• %% Prints a percent sign.
