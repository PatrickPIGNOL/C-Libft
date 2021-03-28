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
	vResult = 0;
	vIndex = 0;
	if(!isdigit(pString[vIndex]))
	{
		vResult = INT_MIN;
	}
	while(pString[vIndex] != '\0' && isdigit(pString[vIndex]))
	{
		vResult *= 10;
		vResult += (int) pString[vIndex] - '0';
	}
	return vResult;
}
