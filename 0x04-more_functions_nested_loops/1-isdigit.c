#include "main.h"


int _isdigit(int c)
{
	int result;

	if (c >= '0' && c <= '9')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
