#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale (LC_ALL, "portuguese_Brazil");
	
	float N1, N2, N3, N4, MEDIA, EXAME, MF;
	
	printf ("Programa para calcular média: ");
    
    printf ("\n\nDigite a primeira nota: ");
    scanf ("%f", &N1);
    
    printf ("Digite a segunda nota: ");
	scanf ("%f", &N2);
	
	printf ("Digite a terceira nota: ");
	scanf ("%f", &N3);
	
	printf ("Digite a quarta nota: ");
	scanf ("%f", &N4);
	
	MEDIA = (2*N1 + 3*N2 + 4*N3 + N4) / 10;
	
	printf("\nMédia: %.1f\n", MEDIA);
	
	if(MEDIA >= 7){
	    printf("Aluno aprovado.\n");
	}
	if(MEDIA < 5){
	    printf("Aluno reprovado.\n");
	}
	
	if((5 <= MEDIA) && (MEDIA < 7)){
	    printf("\nAluno em exame.\n");
	    printf("\nNota do exame: ");
	    scanf("%f", &EXAME);
	    MF = (MEDIA + EXAME)/2;
	
	
    	if(MF >= 5){
    	    printf("\nAluno aprovado.\n");
    	    printf("\nMédia final: %.1f\n",MF);
    	}
    	if(MF <= 4.9){
    	    printf("\nAluno reprovado.\n");
    	    printf("\nMédia final: %.1f\n",MF);
    	}
	}
	
 
    return 0;
}
