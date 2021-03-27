/*
 * ft_memset.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

void* memset(void* pPointer, int pConstant, size_t pNumber)
{
	if(pPointer != NULL)
	{
		unsigned char* vPointer;
		unsigned char vConstant;
		size_t vIndex;

		vPointer = (unsigned char*)pPointer;
		vConstant = (unsigned char)pConstant;
		vIndex = 0;

		while(vIndex < pNumber)
		{
			vPointer[vIndex] = vConstant;
			vIndex++;
		}
	}
	return pPointer;
}
