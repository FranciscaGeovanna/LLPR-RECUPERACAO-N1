#include <stdio.h>
#include <locale.h>
 
int main(){
    
    setlocale (LC_ALL, "Portuguese_Brazil");
 
    int A, B, C, D;
    
    printf ("Digite o primiero valor: ");
    scanf ("%d", &A);
    
    printf ("Digite o segundo valor: ");
    scanf ("%d", &B);
    
    printf("Digite o terceiro valor: "); 
    scanf ("%d", &C);
    
    printf ("Digite o quarto valor: ");
    scanf ("%d", &D);

    if (B > C && D > A && C+D > A+B && C >= 0 && D >= 0 && A %2 == 0){
        printf ("\nValores aceitos.\n");
    } else{
        printf("\nValores não aceitos.\n");
    }
    
    return 0;
}