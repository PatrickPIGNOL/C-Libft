/*
 * strcpy.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#include "libft.h"

char* ft_strcpy(char* pDestination, const char* pSource)
{
	return (char*) ft_strncpy(pDestination, pSource, SIZE_T_MAX);
}
