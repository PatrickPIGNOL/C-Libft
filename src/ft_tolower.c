/*
 * tolower.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_tolower(int pCharacter)
{
	char vResult;
	vResult = pCharacter;
	if(ft_isupper(pCharacter))
	{
		vResult = pCharacter - (int) 'A' + (int) 'a';
	}
	return vResult;
}
