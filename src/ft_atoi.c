/*
 *
 * 	ft_atoi.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_atoi(const char* pString)
{
	int vResult;
	int vSign;
	size_t vIndex;
	vIndex = 0;
	vSign = 1;
	if(ft_isdigit(pString[vIndex]))
	{
		vResult = 0;
	}
	else
	{
		if
		(
			(pString[vIndex] == '-')
			||
			(pString[vIndex] == '+')
		)
		{
			if(pString[vIndex] == '-')
			{
				vSign = -1;
			}
			vIndex++;
		}
		else
		{
			vResult = INT_MIN;
		}
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
	vResult *= vSign;
	return vResult;
}
