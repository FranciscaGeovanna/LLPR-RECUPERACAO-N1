#include <stdio.h>
 
int main() {
 
    int ini, fim;
    
    printf ("Programa para calcular o tempo de um jogo: ");

    printf ("\nDigite a hora inicial do jogo: ");
    scanf("%d",&ini);
    
    printf ("Digite a hora final do jogo: ");
    scanf("%d",&fim);

    if(ini < fim){
       printf("\nO JOGO DUROU %d HORA(S)\n",fim-ini);
    } else{
        printf("\nO JOGO DUROU %d HORA(S)\n",24-ini+fim);
    }
    
    return 0;
}