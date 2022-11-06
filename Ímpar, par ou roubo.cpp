#include <stdio.h>
#include <locale.h>
 
    int main() {
        setlocale (LC_ALL, "Portuguese_Brazil");
 
    int p, j1, j2, r, a, d;
    
    printf ("Jogo: Ímpar, par ou roubo ");
   
    printf ("\n\nEscolha do jogador 1: ");
    scanf("%d",&p);
   
    printf ("Número escolhido pelo jogador 1: ");
    scanf("%d",&j1);
   
    printf ("Número escolhido pelo jogadora 2: ");
    scanf("%d",&j2);
   
    printf ("Jogador 1 roubou? (1 - sim  0 - não):  ");
    scanf("%d",&r);
   
    printf ("O jogador 2 acusou o jogador 1 de roubo? (1 - sim  0 - não):  ");
    scanf("%d",&a);
    
    d = j1 +j2;

    if(r == 1){
        if(a == 1) {
            printf("\nJogador 2 ganha!\n");
        } else {
            printf("\nJogador 1 ganha!\n");
        }
    } else {
        if((d % 2 == 0 && p == 1) || (d % 2 == 1 && p == 0)){
            printf("\nJogador 1 ganha!\n");
        } else {
            printf("\nJogador 2 ganha!\n");
        }
    }

    return 0;
}
