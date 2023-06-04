#include <stdio.h>
#include <stdlib.h>

void soma_vetor_com_escala(int v[], int n, int escalar){

    for(int i = 0 ; i < n; i++){
        v[i]  += escalar;
    }
}

void print_vetor( int *v, int n){
    for(int i = 0 ; i < n; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i,&v[i], i, v[i]);
    } 
}

void desaloca_vetor(int **v){ //fancao desaloca vetor // aloca em **v busca a regia de memoria heap acessando o comteudo
    free(*v); //lipa a regial de memoria heap usando ponteiros para conteudo
    *v = NULL;
}


int main(){
    //alocacao de vetor estatico
    puts("##vetor estatico");
    int vEstatico[5] = {0,10,20,30,40}; //aloca espacoes de memorias inteiros, stack
    printf("&memoria = %d, conteudo = %p\n", &vEstatico, vEstatico);

    print_vetor(vEstatico, 5);
    soma_vetor_com_escala(vEstatico, 5, 10);
    print_vetor(vEstatico,5);

    puts("##vetor dinamico");

    int *vh = (int*) calloc(5, sizeof(int)); //aloca espacos de vetores enteiros na memoria, heap

    for (int i = 0; i < 5; i++){
        vh[i] = i * 100;
    } 
    print_vetor(vh, 5);
    soma_vetor_com_escala(vh, 5, 10);

    //zera os vetores dinamicos apos usalos
    //desalocando vetor 
    //desalocando conteudo da memoria dinamica
    //desalocando da heap
    puts("vetor alocado");
    printf("vh = %d &vh= %p\n", vh,&vh);

    //free(vh);
    //vh = NULL;

    //fucano para desalocar velor
    //outro metodo para desalocar vetor atrasves de um funca definida fora do escopo
    desaloca_vetor(&vh);// passando o edereco da regiao de memoria stack que comte o heap como conteudo

    puts("vetor desalocado");

    printf("vh = %d\n &vh = %p", vh,&vh);

    return 0;
}
