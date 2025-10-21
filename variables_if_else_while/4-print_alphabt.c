#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphdep;
char alphmid;
char alphfin;
alphdep = 'a';
alphmid = 'f';
alphfin = 'r';
while (alphdep <= 'd')
{
putchar(alphdep);
alphdep++;
}
while (alphmid <= 'p')
{
putchar(alphmid);
alphmid++;
}
while (alphfin <= 'z')
{
putchar(alphfin);
alphfin++;
}
putchar('\n');
return (0);
}
