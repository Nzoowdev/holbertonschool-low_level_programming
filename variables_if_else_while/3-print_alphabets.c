#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphmin;
char alphmaj;
alphmin = 'a';
alphmaj = 'A';
while (alphmin <= 'z')
{
putchar(alphmin);
alphmin++;
}
while (alphmaj <= 'Z')
{
putchar(alphmaj);
alphmaj++;
}
putchar('\n');
return (0);
}
