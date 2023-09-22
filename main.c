//Denilson Martins de Almeida 25/08/2023

#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 4


int main() {
	
	int i, j, matriz1[L][C], matriz2[L][C], matrizS[L][C], matrizD[L][C];
	
	printf("Digite a matriz A:\n");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf("%d %d:", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	printf("Digite a matriz B:\n");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf("%d %d:", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			matrizS[i][j]=matriz1[i][j] + matriz2[i][j];
			matrizD[i][j]=matriz1[i][j] - matriz2[i][j];
		}
	}
	
	printf("Matriz A:");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf(" %d ",matriz1[i][j]);
		}
		printf("\n");
	}
	printf("Matriz B:\n");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf(" %d ",matriz2[i][j]);
		}
			printf("\n");
	}
	printf("Matriz Soma:\n");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf(" %d ",matrizS[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Diferenca:\n");
	for (i=0; i<L;i++) {
		for (j=0; j<C;j++) {
			printf(" %d ",matrizD[i][j]);
		}
			printf("\n");
	}
		
	return 0;
}
