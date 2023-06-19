/*uma struct( ou registro ou record) e um "pacote", que podem ter tipos diferentes;
visa representar grupos de dados que resultem em algo mais"concreto";
    ex: registro de alunos, e automoveis etc...
cada variavel e um campo de registro;
em c, registros sao conhecidos como structs(que vem de structure, do ingles)*/

/*
Definicao

struct [nome do registro]{
    tipo campo1;
    tipo campo2;

    }[uma ou mais variaveis]

    ex:

    opsoes de usar struct

    ops 1
    struct aluno {
        char nome[100];  //atributos para variveis
        int idade;
    };

    strct alunos; //chamando struct alunos sem variaveis declaradas


    ops 2
    //declaracao de variaveis

    struct aluno {
        char nome[100];  //atributos para variveis
        int idade;

    }barney, ted; //variaveis estanciadas

    ops3

    //strct anonima
    struct{
        char nome[100];
        int idade;

    } barbara; //sem chamar o nome da struct

    //nao podera declarar novas variaves caso struct anonima

    ops4
    A mais usada
    declara Typedef :definicao de um novo tipo de dados
    entao struct 
    
    ex:

    typedef struct aluno {
        char name[100];
        int idade;
    }tipoAluno; //com o typedef esse sera o apelido para a struct

    para fazer uma declaracao struct aluno acima 

    struct aluno nomedavariavel :usando nome da struct
    ou
    tipoAluno nomedavariavel : usando nome declarado como apelido

 [nome do registro] e [uma ou mais variaveis ] soa opicionais
 [nome do registro] e simplesmente o nome (nao o tipo) da classe de reistros do mesmo tipo
 voce ja pode declarar variaveis, referentes a esta struct, colocando-as no lugar de [uma ou mais variaveis]
 podese ainda atribuir valoresaos campos de uma struct durante sua alocacao estaticas
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[50], sobrenome[64]; //definicao de struct
    int idade;
}Aluno;

typedef struct profecor {
        char name[100];
        int idade;
}tipoProfecor;

int main(){
    /*declaracao de uma variavel*/
    struct aluno barney;
    /*copia a string barney para o campo nome*/
    strcpy(barney.nome, "barney");
    /*atribuindo a 10 a idade de barne em struct*/
    int idade1 = barney.idade = 10;

     
    /*cria variavel Eliel*/
     tipoProfecor eliel; // declaracao de variavel usando apelido
     /*copia a string barney para o campo nome*/
     strcpy(eliel.name,"Eliel");
    return 0;

}

/*alocacao dinamica com struct*/

typedef struct diniz {
    char name[100];
    int idade;
}Diniz;

int fn(){
    Diniz *ely = (Diniz*) calloc(1,sizeof(Diniz));
    /*para acesar os campos de uma struct partindo de um ponteiro, usamos -> */

    strcpy(ely ->name, "Diniz"); //atribuindo nome ao conteudo de nome dentro da struct
    ely->idade = 20; //atribuindo idade
}

