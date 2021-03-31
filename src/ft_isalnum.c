/*
 * 	ft_isalnum.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_isalnum(int pCharacter)
{
	bool vReturn;
	vReturn = false;
	if(ft_isdigit(pCharacter) || ft_isalpha(pCharacter))
	{
		vReturn = true;
	}
	return (int) vReturn;
}
