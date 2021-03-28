/*
 * memccpy.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */


#include "libft.h"

void* ft_memccpy(void* pDestination, void* pSource, int pCharacter, size_t pNumber)
{
	unsigned char* vDestination;
	size_t vIndex;

	vDestination = (unsigned char*) pDestination;
	vIndex = 0;

	if(NULL != pDestination)
	{
		if(NULL != pSource)
		{
			unsigned char* vSource;
			unsigned char vCharacter;
			vSource = (unsigned char*) pSource;
			vCharacter = (unsigned char) pCharacter;
			while(vIndex < pNumber)
			{
				ft_memcpy(&vDestination[vIndex], &vSource[vIndex], 1);
				if(vSource[vIndex] == vCharacter)
				{
					break;
				}
				vIndex++;
			}
		}
	}
	return (void*) &vDestination[vIndex];
}
