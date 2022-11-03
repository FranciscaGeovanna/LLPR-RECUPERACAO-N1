#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale (LC_ALL, "portuguese_Brazil");
	
    float A, B, C, a, b, c;
    
    printf("Programa para para determinar o tipo de um triângulo:");
	
	printf ("\n\nInforme os lados do triângulo: ");
    scanf ("%f", &a);
    scanf ("%f", &b);
    scanf ("%f", &c);
    
    if(A >= B && A >= C){
        A = a; 
        B = b; 
        C = c;
    }
    
    if (B >= A && B >= C){
        A = b;
        B = a;
        C = c; 
    }
    
    if (C >= A && C >= B){
        A = c;
        B = b;
        C = a;
    }
    
    
    if (A >= B+C){
        printf ("NÃO FORMA TRIÂNGULO\n");
    } else{
    if ((A*A) == ((B*B) + (C*C))){
            printf ("TRIÂNGULO RETÂNGULO\n");
    }
    
    if ((A*A) > ((B*B) + (C*C))){
        printf ("TRIÂNGULO OBTUSANGULO\n");
    }
    
    if ((A*A) < ((B*B) + (C*C))){
        printf("TRIÂNGULO ACUTÂNGULO\n");
    }
    
    if (A == B && A == C && B == C){
        printf ("TRIÂNGULO EQUILÁTERO\n");
    }
    
    if (A == B && A != C || A == C && A != B || B == C && B != A){
        printf ("TRIÂNGULO ISÓSCELES\n");
    }
    
    }

    return 0;
}
