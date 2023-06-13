#include <stdio.h>
#include <stdlib.h>  // malloc, calloc, free, NULL


int **create_int_matrix(int slices, int nrows, int ncols){
         /********* ALOCAÇÃO DINÂMICA DE MATRIZES *********/
    int ***m = (int***) calloc(slices, sizeof(int**));

    // para cada fatia
    for (int k = 0; k < slices; k++) {
        m[k] = (int**) calloc(nrows, sizeof(int*));

        // para cada linha
        for (int i = 0; i < nrows; i++) {
            m[k][i] = (int*) calloc(ncols, sizeof(int));
        }
    }
    
}

int main(int argc, char *argv[]){
    printf("argc = %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("ERRO\n%s nrows ncols\n", argv[0]);
        exit(-1);
    }

    int nrows =  atoi(argv[1]); // atoi converte uma string para um enteiro
    int ncols =  atoi(argv[2]);

    

    printf("nrws = %d, ncols = %d\n\n", nrows,ncols);

    

    return 0;
 
}