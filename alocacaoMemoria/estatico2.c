#include <stdio.h>
#include <stdlib.h> /*contem o null,calooc,malloc,free*/

// alocacao de um vetor estatico (memoria stack)

int main(){
    // alocacao de um vetor estatico (memoria stack)

    int vEstatico[5] = {0,10,20,30,40};
    printf("&vetor = %p, conteudo = %p\n", &vEstatico, vEstatico);

    puts("##Vetor estatico");//inprime uma string
    for(int i = 0; i<5; i++){
        printf("%v[%d] = %p\nvStatico[%d] = %d\n", i,&vEstatico[i],i,vEstatico[i]);
    }

    return 0;
}