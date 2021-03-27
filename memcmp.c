/*
 * memcmp.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

int memcmp(const void* pPointer1, const void* pPointer2, size_t pNumber)
{
	int vReturn;

	if(pPointer1 != NULL)
	{
		if(pPointer2 != NULL)
		{
			unsigned char* vPointer1;
			unsigned char* vPointer2;
			int vIndex;

			vReturn = 0;
			vPointer1 = (unsigned char*) pPointer1;
			vPointer2 = (unsigned char*) pPointer2;
			vIndex = 0;

			while((vReturn == 0) && (vIndex < pNumber))
			{
				vReturn = vPointer1[vIndex] - vPointer2[vIndex];
				vIndex++;
			}
		}
	}
	return vReturn;
}

