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
		vPointer = (unsigned char*)pPointer;
		vConstant = (unsigned char)pConstant;
		size_t vCounter = 0;
		while(vCounter < pNumber)
		{
			vPointer[vCounter] = vConstant;
			vCounter++;
		}
	}
	return pPointer;
}
