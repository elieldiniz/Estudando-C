#include <stdio.h>

int main(){

    int v[5]= {10,11,12,13,14};

    printf("%p, %p \n\n", &v, v);
    for (int i = 0; i<5; i++){
        printf("(v + %d) = %p, *(v + i) = %d\n", i, (v + i),i,v[i]);
        printf("&v[%d] = %p, v[%d] = %d\n", i,&v[i] ,i,v[i]);
    }
    return 0;
}