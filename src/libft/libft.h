/*
 * libft.h
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */

#ifndef LIBFT_H_
#define LIBFT_H_

#include <stdlib.h>
#include <string.h>
#define CHAR_BIT	8
#define SCHAR_MIN	-128
#define SCHAR_MAX	+127
#define UCHAR_MAX	255
#define MB_LEN_MAX	16
#define CHAR_MIN	-128
#define CHAR_MAX	+127
#define SHRT_MIN	-32768
#define SHRT_MAX	+32767
#define USHRT_MAX	65535
#define INT_MIN		-2147483648
#define INT_MAX		+2147483647
#define UINT_MAX	4294967295
#define LONG_MIN	-9223372036854775808
#define LONG_MAX	+9223372036854775807
#define ULONG_MAX	18446744073709551615

typedef enum
{
	false = 0,
	true = 1
}bool;

bool ft_itob(int pBoolean);

int 	ft_atoi		(const char* pString);
void 	ft_bzero	(void* pString, size_t pNumber);
int 	ft_isalnum	(int pCharacter);
int 	ft_isdigit	(int pCharacter);
int 	ft_isalpha	(int pCharacter);
int 	ft_isascii	(int pCharacter);
void* 	ft_memccpy	(void* 			pDestination, 	void* 		pSource, 	int 	pChar,	size_t	pNumber);
void* 	ft_memchr	(const void* 	pPointer, 		int 		pCharacter,	size_t	pNumber);
int 	ft_memcmp	(const void* 	pPointer1, 		const void*	pPointer2,	size_t	pNumber);
void* 	ft_memcpy	(void* 			pDestination, 	void* 		pSource,	size_t	pNumber);
void* 	ft_memmove	(void* 			pDestination, 	void* 		pSource,	size_t	pNumber);
void* 	ft_memset	(void* 			pPointer, 		int 		pCharacter,	size_t	pNumber);

#endif /* LIBFT_H_ */
