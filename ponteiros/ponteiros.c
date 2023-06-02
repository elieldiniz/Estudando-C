#include <stdio.h>
#include <stdlib.h>

/*ponteiros * */


int main(int argc, char *argv[]){
  int a, b, *p1, *p2;

  a = 4;
  b = 3;
  p1 = &a;
  p2 = p1;
  *p2 = *p1 + 3; /* a + 3 = 7*/  /*p2 aponta para o para p1 que aponta para &a que tem o conteudo de 4 que sera subistituido por 7*/
  b = b * (*p1); /* 3 * 7 = */  /*conteudo de b * ponteiro *p1 que aponta para &a que contem 3, b = 21*/
  printf("%d %d\n", *p1 , *p2);
  (*p2)++; /* conteudo do ponteiro de *p2 mais 1, incrementador , *p2 passara a ser 8, lenbrando que p2 aponta para &a que tem conteudo 7,*/
  p1 = &b;

  printf("%d %d\n", *p1 , *p2);
  printf("%d %d\n", a , b);

}