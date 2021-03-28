/*
 * isdigit.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_isdigit(int pCharacter)
{
	bool vReturn;
	unsigned char vCharacter;
	vReturn = false;
	vCharacter = (unsigned char)pCharacter;
	if
	(
		(vCharacter >= '0')
		&&
		(vCharacter <= '9')
	)
	{
		return vReturn = true;
	}
	return (int) vReturn;
}
