#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_str_len(char *str);
char *arrayX(int size);
char *iterate_zeros(char *str);
int get_digit(char c);
void get_prod(char *prod, char *mult, int digit, int zeros);
void add_nums(char *final_prod, char *next_prod, int next_len);


/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments passed to the program.
 * @argc: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeros = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeros(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeros(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_str_len(argv[1]) + get_str_len(argv[2]);
	final_prod = arrayX(size + 1);
	next_prod = arrayX(size + 1);

	for (index = get_str_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeros++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}


/**
* get_str_len - get the length of a string.
*
* @str: string to be measured.
*
* Return: length of a string
*/
int get_str_len(char *str)
{
	int str_len = 0;

	while (*str++)
	{
		str_len++;
	}
	return (str_len);
}


/**
* arrayX - creates an array of chars and initializes it with
*	the char 'x', adds a terminating null byte.
*
* @size: the size of the array
*
* Description: if insufficient space, the function exits with
*		status 98;
*
* Return: a pointer to the array
*/
char *arrayX(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
	{
		array[i] = 'x';
	}
	array[i] = '\0';
	return (array);
}

/**
* iterate_zeros - iterates through a string of numbers containing
*		leading zeros until it hits a non-zero number.
*
* @str: string of numbers to iterate through.
*
* Return: a pointer to the next non-zero element.
*/
char *iterate_zeros(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}


/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}


/**
* get_prod - multiplies a string of numbers by a single digit.
*
* @prod: the buffer to store result
* @mult: string of numbers
* @digit: the single digit
* @zero: the necessary number of leading zeros.
*
* Description: If mult contains a non-digit, the function
*		exits with a status value of 98.
*
* Return: nothing
*/
void get_prod(char *prod, char *mult, int digit, int zeros)
{
	int mult_len, num, tens = 0;

	mult_len = get_str_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;
	while (zeros--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}


/**
* add_nums - Adds the numbers stored in two strings.
*
* @final_prod: The buffer storing the running final product.
* @next_prod: The next product to be added.
* @next_len: The length of next_prod.
*
* Return: nothing
*/
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}
