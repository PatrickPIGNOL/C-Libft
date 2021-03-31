/*
 * 	ft_strncmp.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_strncmp(const char* pString1, const char* pString2, size_t pNumber)
{
	char vReturn;
	vReturn = 0;
	if
	(
		(NULL != pString1)
		&&
		(NULL != pString2)
	)
	{
		size_t vIndex;
		vIndex = 0;
		while
		(
			((vReturn = pString1[vIndex] - pString2[vIndex]) == 0)
			&&
			(pString1[vIndex] != '\0')
			&&
			(pString2[vIndex] != '\0')
			&&
			(vIndex < pNumber)
		)
		{
			vIndex++;
		}
	}
	return (int) vReturn;
}
