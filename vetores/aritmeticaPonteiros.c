/*
declarar int v[5];
sinbolo v e uma constante que representa o endeco inicial do veto
vetor aloca 5 posicoes na memoria
acesso aos vetores declarados declara v mais [] e detro o indece ou posicao do vetor [1][2]
atribuir valor a vetor v[5] = {1,2,3,4}

atribuicao a vetor feito pelos sistema operacional
(v+1) vetor mais 1 =s104 local na memoria alocado 4 bytes + 1  = s108 acesso ao local
pega o endereco base e desloca 4bytes
(v+3) = local na memoria de 4bytes + 3 * 4bytes = 12bytes
quantidade de deslocamento a partir do endereco somado
*/

#include <stdio.h>
int main(){
    int v[5]= {10,11,12,13,14};

    printf("(v+0) = %d, vConteudo = %p\n", &v[0],v[0]);
    printf("(v+1) = %d, vConteudo = %p\n", &v[1],v[1]);
    printf("(v+2) = %d, vConteudo = %p\n", &v[2],v[2]);
    printf("(v+3) = %d, vConteudo = %p\n", &v[3],v[3]);
    printf("(v+4) = %d, vConteudo = %p\n", &v[4],v[4]);
}
