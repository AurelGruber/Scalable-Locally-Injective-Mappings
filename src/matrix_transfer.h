//
//  matrix_transfer.h
//  Blender
//
//  Created by Aurel Gruber on 21/04/16.
//
//

#ifndef matrix_transfer_h
#define matrix_transfer_h

#include <stdio.h>


typedef struct {
	int nCharts;
	int *nVerts, *nFaces;

	double **Vmatrices, **UVmatrices;
	int **Fmatrices;
} matrix_transfer;

void param_slim_bridge(matrix_transfer *mt);

#endif /* matrix_transfer_h */
