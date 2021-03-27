/*
 * memccpy.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */


#include "libft.h"

void* memccpy(void* pDestination, void* pSource, int pChar, size_t pNumber)
{
	unsigned char* vDestination;
	size_t vIndex;

	vDestination = (unsigned char*) pDestination;
	vIndex = 0;

	if(pDestination != NULL)
	{
		if(pSource != NULL)
		{
			unsigned char* vSource;
			unsigned char vChar;
			vSource = (unsigned char*) pSource;
			vChar = (unsigned char) pChar;
			while(vIndex < pNumber)
			{
				memmove(&pDestination[vIndex], &pSource[vIndex], 1);
				if(vSource[vIndex] == pChar)
				{
					return &pDestination[vIndex + 1];
				}
				vIndex++;
			}
		}
	}
	return (void*) vDestination[vIndex];
}
