/*
 * memcpy.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

void* ft_memcpy(void* pDestination, void* pSource, size_t pNumber)
{
	return ft_memmove(pDestination, pSource, pNumber);
}
