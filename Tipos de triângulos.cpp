#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale (LC_ALL, "portuguese_Brazil");
	
    float A, B, C, a, b, c;
    
    printf("Programa para para determinar o tipo de um tri�ngulo:");
	
	printf ("\n\nInforme os lados do tri�ngulo: ");
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
        printf ("N�O FORMA TRI�NGULO\n");
    } else{
    if ((A*A) == ((B*B) + (C*C))){
            printf ("TRI�NGULO RET�NGULO\n");
    }
    
    if ((A*A) > ((B*B) + (C*C))){
        printf ("TRI�NGULO OBTUSANGULO\n");
    }
    
    if ((A*A) < ((B*B) + (C*C))){
        printf("TRI�NGULO ACUT�NGULO\n");
    }
    
    if (A == B && A == C && B == C){
        printf ("TRI�NGULO EQUIL�TERO\n");
    }
    
    if (A == B && A != C || A == C && A != B || B == C && B != A){
        printf ("TRI�NGULO IS�SCELES\n");
    }
    
    }

    return 0;
}
