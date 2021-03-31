/*
 * strlen.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

size_t strlen(const char* pString)
{
	size_t vResult;
	vResult = 0;
	while(pString[vResult] != '\0')
	{
		vResult++;
	}
	return vResult;
}
