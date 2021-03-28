/*
 *
 * 	atoi.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_atoi(const char* pString)
{
	int vResult;
	size_t vIndex;
	vIndex = 0;
	if(!ft_isdigit(pString[vIndex]))
	{
		vResult = INT_MIN;
	}
	else
	{
		vResult = 0;
	}
	while
	(
		(pString[vIndex] != '\0')
		&&
		ft_isdigit(pString[vIndex])
	)
	{
		vResult *= 10;
		vResult += (int) pString[vIndex] - '0';
	}
	return vResult;
}
