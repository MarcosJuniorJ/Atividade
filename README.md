# Atividade 1 Lista 6 
#include <stdio.h>
#include <stdlib.h>


int main( ) {
	
	int i =1;
	int *ponteiroint = &i;
	
	float f = 0.8;
	float *ponteirofloat = &f;
	
    char c = 'M';
	char *ponteirochar = &c;
	
	printf("Antes da modificacao:\n");
	printf("Valor da variavel inteira:%d\n",i);
	printf("Valor da variavel real:%.2f\n",f);
	printf("Valor da variavel char:%c\n",c);
	
	*ponteiroint = 4;
    *ponteirofloat = 8.8; 
    *ponteirochar = 'B';
	
	
	printf("Depois da modificacao:\n");
	printf (" Valor da variavel inteira: %d\n",*ponteiroint);
	printf (" Valor da variavel real: %.2f\n",*ponteirofloat);
	printf ("Valor da variavel char: %c\n", *ponteirochar);
	
	return 0;
}
