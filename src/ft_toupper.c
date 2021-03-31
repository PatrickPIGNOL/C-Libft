/*
 * toupper.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_toupper(int pCharacter)
{
	char vResult;
	vResult = pCharacter;
	if(ft_islower(pCharacter))
	{
		vResult = pCharacter - (int) 'a' + (int) 'A';
	}
	return vResult;
}
