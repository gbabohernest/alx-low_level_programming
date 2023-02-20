#include <stdio.h>
/**
* main - Prints the combinations of three numbers.
*
* Return: 0 (Success)
*/
int main(void)
{
	int num1 = '0';
	int num2 = '0';
	int num3 = '0';

	while (num1 <= '7')
	{
		while (num2 <= '8')
		{
			while (num3 <= '9')
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (!(num1 == '7' && num2 == '8' && num3 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num3 = '0';
			num2++;
		}
		num2 = '0';
		num1++;
	}
	putchar('\n');
	return (0);
}
