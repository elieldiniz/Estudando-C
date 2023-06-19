#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct livros{
  char title[100];
  float preco;
  int numb_Page;
}Livro;

int main(){

    Livro *CriarLivro = calloc(1, sizeof(Livro));
    
    
    

    return 0;
}
