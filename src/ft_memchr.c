/*
 * 	ft_memchr.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

void* ft_memchr(const void* pPointer, int pCharacter, size_t pNumber)
{
	unsigned char* vReturn;

	vReturn = NULL;

	if(NULL != pPointer)
	{
		unsigned char vCharacter;
		unsigned char* vPointer;
		size_t vIndex;

		vCharacter = (unsigned char) pCharacter;
		vPointer = (unsigned char*) pPointer;
		vIndex = 0;

		while(vIndex < pNumber)
		{
			if(vCharacter == vPointer[vIndex])
			{
				vReturn = &vPointer[vIndex];
			}
			vIndex++;
		}
	}

	return (void*) vReturn;
}
