/*
 * isascii.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"


int ft_isascii(int pCharacter)
{
	bool vReturn;
	vReturn = false;
	unsigned char vCharacter;
	vCharacter = (unsigned char)pCharacter;
	if
	(
		(vCharacter >= '\0' && vCharacter <= '\x7F')
	)
	{
		return vReturn = true;
	}
	return (int) vReturn;
}
