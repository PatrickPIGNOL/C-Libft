/*
 * ft_memset.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

void* ft_memset(void* pPointer, int pCharacter, size_t pNumber)
{
	if(pPointer != NULL)
	{
		unsigned char* vPointer;
		unsigned char vCharacter;
		size_t vIndex;

		vPointer = (unsigned char*)pPointer;
		vCharacter = (unsigned char)pCharacter;
		vIndex = 0;

		while(vIndex < pNumber)
		{
			vPointer[vIndex] = vCharacter;
			vIndex++;
		}
	}
	return pPointer;
}
