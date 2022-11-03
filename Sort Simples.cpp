#include <stdio.h>
 
int main() {
    int v1, v2, v3;
    
    printf ("Programa para organizar valores inteiros em ordem crescente ");
    
    printf ("\nDigite o primeiro valor: ");
    scanf ("%d", &v1);
    
    printf ("Digite o segundo valor: ");
    scanf ("%d", &v2);
    
    printf ("Digite o terceiro valor: ");
    scanf ("%d", &v3);
    
    printf ("\nOrdem crescente dos valores: ");
    
    if((v1 <= v2) && (v1 <= v3)){
        if(v2 <= v3){
            printf("\n%d\n%d\n%d\n",v1,v2,v3);
        } else{
            printf("\n%d\n%d\n%d\n",v1,v3,v2);
        }
    }
    
    if ((v2 < v1) && (v2 < v3)){
      if(v1 < v3){
        printf("\n%d\n%d\n%d\n",v2,v1,v3);
      } else{
        printf("\n%d\n%d\n%d\n",v2,v3,v1);
      }
    }
    
    if ((v3 < v1) && (v3 < v2)){
        if (v1 <= v2){
            printf ("\n%d\n%d\n%d\n",v3,v1,v2);
        } else{
            printf ("\n%d\n%d\n%d\n",v3,v2,v1);
        }
    }
    
    printf("\nValores digitados: \n%d\n%d\n%d\n",v1,v2,v3);

    return 0;
}
