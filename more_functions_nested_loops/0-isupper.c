#include "main.h"
/**
 * _isupper es una funcion que chequea uppercase char
 * @c: el parametro para evaluar
 * Return 1 si es upper, otherwise 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
