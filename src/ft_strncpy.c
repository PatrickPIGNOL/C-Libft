/*
 * strncpy.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

char* ft_strncpy(char* pDestination, const char* pSource, size_t pNumber)
{
	if
	(
		(NULL != pDestination)
		&&
		(NULL != pSource)
	)
	{
		size_t vIndex;
		vIndex = 0;
		while
		(
			((pDestination[vIndex] = pSource[vIndex]) != '\0')
			&&
			(vIndex < pNumber)
		)
		{
			vIndex++;
		}
		pDestination[vIndex] = '\0';
	}
	return pDestination;
}
