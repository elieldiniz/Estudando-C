#include <stdio.h>
#include <stdlib.h> /*contem o null,calooc,malloc,free*/

// alocacao de um vetor edinamico usando malloc (memoria heap)
// o malloc e o free sao funcoes especiais que o C usa para alocar e liberar memoriam

int main(){
    int *vh_heap = malloc(5 * sizeof(int)); //aloca uma posisao na memoria heap de 20 bytes dado que cada espaco int tem 4bytes, recebe lixo de memoria;
    vh_heap[2] = 10;

    printf("&vh_heap%p = %p\n" ,&vh_heap, vh_heap);

    for(int i = 0; i<5; i++){
        printf("%v[%d] = %p\vh_heap[%d] = %d\n", i,&vh_heap[i],i,vh_heap[i]);
    }

    puts("##calloc");

//Calloc
//aloca memoria e zera (preenche com 0 e para tipo float prenche com Null)


    // calloc garante que todos elementos alocados terao o valor 0
    int *vh_cal = calloc(5 , sizeof(int)); //aloca uma posisao na memoria heap de 20 bytes dado que cada espaco int tem 4bytes, recebe o valor 0;
    
    printf("&vh_cal%p = %p\n" ,&vh_cal, vh_cal);

    for(int i = 0; i<5; i++){
        printf("%v[%d] = %p\vh_cal[%d] = %d\n", i,&vh_cal[i],i,vh_cal[i]);
    }
    
    return 0;


//nao esta desalocando o espaco de memoria usado

}

