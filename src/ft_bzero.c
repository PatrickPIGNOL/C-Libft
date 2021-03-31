/*
 *
 * 	ft_bzero.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

void ft_bzero(void* pString, size_t pNumber)
{
	if(NULL != pString)
	{
		unsigned char* vString;
		size_t vIndex;
		vString = (unsigned char*)pString;
		vIndex = 0;
		while(vIndex < pNumber)
		{
			vString[vIndex] = '\0';
			vIndex++;
		}
	}
}
