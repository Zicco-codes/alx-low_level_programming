#include "main.h"
/**
 * _abs - computes the absolute valus
 * of an integer
 *
 * @i: input number a a integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
