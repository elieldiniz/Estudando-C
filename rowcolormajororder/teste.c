#include <stdlib.h>
#include <stdio.h>


int **create_int_matrix(int nrows, int ncols){

    int **m =  (int **)calloc(nrows, sizeof(int *));
    
    for(int i=0;i<nrows;++i){
        m[i]=(int *) calloc(ncols,sizeof(int));
    }


    return m;
}

int main(){
     
    int nrows = 10;
    int ncols = 20; 

    int **m = create_int_matrix(nrows, ncols);
    for(int i = 0; i< nrows; i++){
        for(int j = 0;j < ncols; j++){
            m[i][j] = (i + j) % 2;
            printf("%d\n", &m[i][j]);  /*mostra os ederecos de memoria sendo alocados*/ 
        }
    }
    return 0;
}