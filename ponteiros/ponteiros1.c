#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10;  /* variaveis do tipo inteiro 'int' */ /*declara variavel com valor 10*/
    int *p1 = &a; /* *p1 recebe o endereco de a declarando &a */ /* *p1 aponta para um inteiro que recebe o endereco da variavel a quem contem o valor 10*/
    int **p2 = &p1; /* **p recebe endereco de &p1 que contem endereco de a& com o conteudo de a*/ 
    /* **p2 aponta dois ponteiros atras, recebe endereco de &p1 que contem, que contem &a que por fim inprime conteudo da variavel a*/

    printf("&a = %p, a = %d\n", &a, a); /*declara um &a para inprimir na tela e %p para definir como inteiro e inprimir o valor a que foi declarado dentro do printf 
    enquanto %d declara um inteiro e pega o conteudo da variavael a declarado no printf */
    printf("&p1 = %p, p1= %p, *p1 = %p\n", &p1, p1,*p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    **p2 = 99;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1= %p, *p1 = %p\n", &p1, p1,*p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

  return 0;
}
