#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n = 5; //memoria satck 
    int *v; //variavel que aponta para enderecos de memoria 

    v = (int*) malloc(n * sizeof(int)); //criando endereco na memoria heap dinamicamente, alocando 5 * int,aloca 20 bytes na memoria heap

    //laco for
    for(i = 0;//declara variavel tambem na heap
        i<5;// verifica se i e menor que 5, se menor faz um lop ate que seja 5,
        i++)//incrementa mais 1 toda vez que o lop se repete 
        {
        v[i] = i;//codigo que sera executado a cada lop ate comprir a condicao

        printf("v[i] = %p\ni = %d\n", v[i], i);
    }
    printf(" i = %d\n", v[i], i);

    puts("casso 2");

    int v1[5] = {10,11,12,13,14};
    int *v2, *p;
    int idx;

    p = v1;
    p[3] = p[4] = 10;

    v2 = (int*) malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++){
        v2[i] = v1[i];
        printf("v2[%d] = %d\nmemoria = %p\n",i, v2[i], &v2[i]);
    }


    puts("casso2");

    int v3[5] = {100,200,300,400,500};

    int *v4;
    printf("v4 = %d\n", v4);

    v4 = (int*) malloc(5 * sizeof(int)); //aloca na regiao de memoria heap

    v4 = v3; // desaloca o v4 da heap e passa  avaler v3 que esta na stack, perdendo conteudo da heap

    printf(" idx = %d\nmemoriav3 = %d\n",i,&v4[i]);

    for ( i = 0; i < 5; i++)
    {   
        v4[2] = 200; 
        v4[3] = v4[2];
        printf(" i = %d\nv4= %d\n",i,v4[i]);
    }
    
    printf("v4 = %d", &v4[i]);

    puts("desalocando");
    //desalocando
    free(v4);
    v4 = NULL;

    for ( i = 0; i < 5; i++)
    {   
        printf(" i = %d\nv4= %d\n",i,v4[i]);
    }

}
 