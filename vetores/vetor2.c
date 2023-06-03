#include <stdio.h>

/*interagindo com vetores*/

int main(){
     int i;
     int v[5]; /*vetor de cinco posicoes na memoria declarado*/
     for(i = 0 ; i < 5; i++){
        scanf("&v[i]= %d", &v[i]);
        printf(" &v[i] = %d\n", &v[i]);
     }
}

