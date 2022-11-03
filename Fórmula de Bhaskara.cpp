#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    
    setlocale (LC_ALL, "Portuguese_Brazil");
	
	double A,B,C;
	
	printf("Programa para efetuar o cálculo das raízes da equação de Bhaskara\n");
	
	printf ("\nDigite o primeiro número: ");
	scanf ("%lf", &A);
	
	printf ("Digite o segundo número: ");
	scanf ("%lf", &B);
	
	printf ("Digite o terceiro número: ");
	scanf ("%lf", &C);
	
	if((B*B - 4*A*C) < 0 || (A == 0)){
		printf("\nImpossível calcular\n");
	} else{
		printf("\nR1 = %.5lf\n",(-B + sqrt(B*B - 4*A*C))/(2*A));
		printf("R2 = %.5lf\n",(-B - sqrt(B*B - 4*A*C))/(2*A));
	}
 
    return 0;
}