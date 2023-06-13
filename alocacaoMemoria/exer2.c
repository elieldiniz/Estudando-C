#include <stdio.h>
#include <stdlib.h>

int main(){
    char *v;

    for( int i =0 ; i < 10000; i++){
        v = calloc(1024, sizeof(char)); //aloca 5 mil elemetos, com tamanho de um kbyte 
    }
    return 0;
}