/*
 * memcmp.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int ft_memcmp(const void* pPointer1, const void* pPointer2, size_t pNumber)
{
	int vReturn;

	vReturn = 0;

	if(NULL != pPointer1)
	{
		if(NULL != pPointer2)
		{
			unsigned char* vPointer1;
			unsigned char* vPointer2;
			int vIndex;

			vPointer1 = (unsigned char*) pPointer1;
			vPointer2 = (unsigned char*) pPointer2;
			vIndex = 0;

			while((vIndex < pNumber) && ((vReturn = vPointer1[vIndex] - vPointer2[vIndex]) == 0))
			{
				vIndex++;
			}
		}
	}
	return vReturn;
}

