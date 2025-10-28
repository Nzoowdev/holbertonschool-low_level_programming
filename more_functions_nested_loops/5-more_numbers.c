#include "main.h"
/**
 * more_numbers - check the code
 */
void more_numbers(void)
{
	int ligne;
	int nombre;
	{
		for (ligne = 0; ligne <= 9; ligne++)
		{
			for (nombre = 0; nombre <= 14; nombre++)
			{
				if (nombre >= 10)
				
					_putchar('0' + (nombre / 10));
				}
			_putchar('0' + (nombre % 10));
			_putchar('\n');
		}
	}
}
