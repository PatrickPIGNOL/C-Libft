/*
 * isalpha.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_isalpha(int pCharacter)
{
	bool vReturn;
	vReturn = false;
	unsigned char vCharacter;
	vCharacter = (unsigned char)pCharacter;
	if
	(
		(vCharacter >= 'a' && vCharacter <= 'z')
		||
		(vCharacter >= 'A' && vCharacter <= 'Z')
	)
	{
		return vReturn = true;
	}
	return (int) vReturn;
}
