/*
oque siguinifica crud

C : CREATE
R : READ
U : UPDATE
D : DELETE

1- CONSIDERE QUE O ALUNO POSSUI UM LIVRO FAVORITO, QUE , POR SIMPLIFICACAO, POSSUI UM TITILO, NUMEMO DE PAGINAS E PRECO
    2- CODIFIQUE A STRUCT DE LIVROS E ADAPTE A STRUCT DE ALUNO

 3- CRIE AS FUNCOES DE CRIACAO (C), DELETE (D) E DE IMPRESSAO PARA STRUCT ALUNO LIVRO
 4-NA FUNCAO DE DELTE, GARANTA QUE O PONTEIRO E ATRIBUIDO COM NULL DEPOIS DA DECLARACAO
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct _livro {
    char titulo[100]; 
    unsigned int num_paginas; //unsigned int representa um inteiro sem sinal ou pode ser usado um intero negativo
    float preco;
}Livro;

typedef struct _aluno{
    char nome[100];
    int idade;
    Livro *livroFavorito;
}Aluno;



//construtor para livro

Livro *create_livro(const char *title,  unsigned int number_page, float preco) {
   Livro *livro = (Livro *) calloc(1, sizeof(Livro)); //ponteiro para livro

   strcpy(livro -> titulo, title); //acesar um campo da variavel livro via ponteiro, acesar variaveis dinamicas com ponteiro ->
                                    // lenbrando que para acessar um campo dentro de uma variavel struct dentro de um ponteiro e usado ->
   livro->num_paginas = number_page;
   livro->preco = preco;

   return livro;
}

void destruirLivro(Livro **livro_ref){  //desaloca espaco alocado na memoria
    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref=NULL;
}

void destroiAluno(Aluno **Aluno_ref){ // ponteiro para ponteiro Aluno
    Aluno *Aluno = *Aluno_ref;
    destruirLivro(&Aluno->livroFavorito); //primeiro desaloca livros favoritos de da free en aluno
    free(Aluno);
    *Aluno_ref=NULL;
}

Livro *copy_livro(const Livro *livro){ //variavel que faz copia do livro

    return create_livro(livro->titulo, livro->num_paginas, livro->preco);
}

//funcao de inprecao de um livro

void print_livro(const Livro *livro){
    printf("titulo: %s\n", livro->titulo);
    printf("number pages: %d\n", livro->num_paginas);
    printf("preco: %.2f\n", livro->preco); // %2.f para valores float , para precisao de duas casas decimais
}


Aluno *create_aluno(const char *nome, int idade,const Livro *livro_f){
    Aluno *aluno = (Aluno *) calloc(1,sizeof(aluno));

    strcpy(aluno->nome, nome);
    aluno->idade = idade;
    aluno->livroFavorito = copy_livro(livro_f);

    return aluno;
}

void print_aluno(const Aluno *aluno){
    printf("Nome: %s\n idade: %d anos \n", aluno->nome, aluno->idade);
    puts("livro favorito");
    print_livro(aluno->livroFavorito);
}

bool livros_sao_inguais(const Livro *livro_1, const Livro *livro_2 ){   //funcao de validacao de livros ou strings usando bool que recebendo 2 parametros
    if (strcmp(livro_1->titulo, livro_2->titulo) == 0){
        return true;    
    }else{
        return false;
    }
    
    
}

int main(){

    Livro *livro_1 = create_livro("harry potter", 200,25); //pega a struct livro e cria variavel harry en ceguida usa a funcao create_livro
                                                    //pasando 3 argumento titulo, numero de paginas e preco
    //usa a funcao print livro p[ara exibir o livro criado                                        
    print_livro(livro_1);

    Livro *livro_2 = create_livro("foda-se", 150, 20);
    print_livro(livro_2);

    
    
    Aluno *aluno_1 = create_aluno("Eliel",24,livro_1);
    print_aluno(aluno_1);

    //verificacoa de livros
    puts("\nlivros sao inguais");
    //os exenplares sao inguais
    if(aluno_1->livroFavorito == livro_1){
        puts("Sim");
    }else{
        puts("nao");
    }

    puts("\nlivros sao inguais");

    //a obra e a mesma ou os livros sao os mesmo
    if(livros_sao_inguais(aluno_1->livroFavorito, livro_1)){
        puts("Sim");
    }else{
        puts("nao");
    }


    destruirLivro(&livro_1);

    print_aluno(aluno_1); 

    destroiAluno(&aluno_1); //lipando memoria e atribuindo null

    print_aluno(aluno_1);


    


    //usando a funcao destruir, zera variaveis criadas na memoria heap
    destruirLivro(&livro_1);
    printf("livro_1? %d\n",livro_1 == NULL);


    return 0;
}