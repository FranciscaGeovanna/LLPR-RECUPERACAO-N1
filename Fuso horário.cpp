#include <stdio.h>
#include <locale.h>
 
int main() {
    setlocale (LC_ALL, "Portuguese_Brazil");
 
    int S, T, F, H;
    
    printf ("Programa para calcular a hora de chegada de vôo ao seu destino");
    
    printf ("\n\nInforme a hora de saída do vôo: ");
    scanf("%d", &S);
    
    printf ("Informe o tempo de viajem: ");
    scanf("%d", &T);
    
    printf ("Informe o fuso horário do destino: ");
    scanf("%d", &F);
    
    if(S == 0){
        S = 24;
    }
    
    H = (S + T + F) % 24;
    
    printf("\nHora local prevista para a chegada: %d\n", H);
 
    return 0;
}