#include"main.h"
#include<unistd.h>
/**
* print_alphabet - autoalphabet
*/
void print_alphabet(void)
{
char autoalph;
for (autoalph = 'a'; autoalph <= 'z'; autoalph++)
_putchar (autoalph);
_putchar('\n');
}
