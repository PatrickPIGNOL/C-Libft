/*
 * libft.h
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#ifndef LIBFT_H_
#define LIBFT_H_

# include <string.h>

void* 	memccpy	(void* pDestination, void* pSource, int pChar, size_t pNumber);
int 	memcmp	(const void* pPointer1, const void* pPointer2, size_t pNumber)
void* 	memcpy	(void* pDestination, void* pSource, size_t pNumber);
void* 	memmove	(void* pDestination, void* pSource, size_t pNumber);

#endif /* LIBFT_H_ */
