#include"main.h"
#include<unistd.h>
/**
* print_alphabet_x10 - autoalphabet for 10 time
*/
void print_alphabet_x10(void)
{
int fin;
char autoalph;
{
for (fin = 0; fin <= 10; fin++)
{
for (autoalph = 'a'; autoalph <= 'z'; autoalph++)
_putchar (autoalph);
_putchar('\n');
}
}
}
