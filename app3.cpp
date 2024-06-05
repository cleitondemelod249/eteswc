#include<stdio.h>
#include<stdlib.h>
int main() {
	int cine[10][10];
	for(int linha = 0; linha < 10; linha++) {
		for(int coluna = 0;
		 coluna < 10;
		  coluna ++) {
		  	cine[linha][coluna] = 1;
		  	//printf("\t[%d]", cine[linha][coluna]);
		}
		//printf("\n");
	}
	
	while(true) {
		for(int linha = 0; linha < 10; linha++) {
		for(int coluna = 0;
		 coluna < 10;
		  coluna ++) {
		  	if(cine[linha][coluna] == 1) {
		  		printf("\t[L]");
			  } else {
			  	printf("\t[X]");
			  }
		  }
		  printf("\n");
		}
	
		int l, c;
	
		printf("Digite a linha: ");
		scanf("%d", &l);
		printf("Digite a Coluna: ");
		scanf("%d", &c);
	
		if(cine[l-1][c-1] == 0) {
			printf("\nEscolha outra cadeira\n");
			system("PAUSE");
		} else {
			cine[l-1][c-1] = 0;
			printf("\nCadeira reservada ;)\n");
			system("PAUSE");
		}
	
		system("cls");
	}
	
	return 0;
}
