/*
 * memmove.c
 *
 *  Created on: 27 mars 2021
 *      Author: patrick
 */


#include "libft.h"

void* memmove(void* pDestination, void* pSource, size_t pNumber)
{
	if(pDestination != NULL)
	{
		if(pSource != NULL)
		{
			unsigned char* vDestination;
			unsigned char* vSource;
			vDestination = (unsigned char*) pDestination;
			vSource = (unsigned char*) pSource;
			unsigned char* vTemporaire;
			vTemporaire = (unsigned char*) malloc(pNumber * sizeof(unsigned char*));
			if(vTemporaire != NULL)
			{
				size_t vIndex;
				vIndex = 0;
				while(vIndex < pNumber)
				{
					vTemporaire[vIndex] = vSource[vIndex];
					vIndex++;
				}
				vIndex = 0;
				while(vIndex < pNumber)
				{
					vDestination[vIndex] = vTemporaire[vIndex];
					vIndex++;
				}
				free(vTemporaire);
			}
		}
	}
	return pDestination;
}
