#include <stdio.h>

/*alocacao de vetores estaticos*/

int main(){
    int v[5] = {0, 30, 10, 0, 4}; /*declarando e atribuindo valores*/

    for(int i = 0; i<5; i++){ /*lup for para exibir todos os indix */
    printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i],i,v[i]); 
    }
    printf("&v[6] = %p, %p= v[6]", &v[6], v[6]);
}