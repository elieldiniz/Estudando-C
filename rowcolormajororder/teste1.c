/*
alocacao dinamica vetor com matriz
para garantir uma matriz dinamica com elemtos contiguos namemoria ram
podemos mostrr um vetor com matriz;

mas, nao e mais possivel acessar os elemtos pelos indices de linha e coluna
enta, como acessar o elemento
*/

#include <stdlib.h>
#include <stdio.h>



int main(){
     
    int nrows = 10;
    int ncols = 20;
    int elemets = nrows * ncols;

    int *m = (int *)calloc(elemets, sizeof(int)); /*alocacao dinamica de vetor com matris asecavel pelo index en cequencia*/

    
    for(int i = 0; i< nrows; i++){
        for(int j = 0;j < ncols; j++){
            int p = (i * ncols) +j;
            m[p] = (i + j) %2; /*essa operacao para acesar tem um custo maior*/
            printf("%d\n",m[p]);
           
        }
    }
    return 0;
}
