#include<stdio.h>
#include<stdlib.h>

int menuPrincipal();
int menuPedirLanche();
int menuRastrear();
int menuReportar();

int main() {
	system("color 70");
	printf(".:: SISTEMA PDV - LACHONETE KILANCHE ::.\n");
	
	menuPrincipal();
	return 0;
}

int menuPrincipal() {
	int opcao;
	
	printf("\nMENU PRINCIPAL:");
	printf("\n[1] - COMPRAR LANCHE");
	printf("\n[2] - RASTREAR LANCHE");
	printf("\n[3] - REPORTAR PROBLEMA");
	printf("\n[4] - FAZER ELOGIO");
	printf("\n[5] - SAIR");
	
	printf("\nDIGITE A OPCAO: ");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao) {
		case 1:
			menuPedirLanche();
			break;
		case 2:
			menuRastrear();
			break;
		case 3:
			menuReportar();
			break;
		case 4:
			break;
		case 5:
			return 0;
		default:
			printf("OPCAO INVALIDA");
	}
	
	return opcao;
}
int menuPedirLanche() {
	int opcao;
	
	printf("\n[1] - HAMBURGER");
	printf("\n[2] - COXINHA");
	printf("\n[3] - COCA COLA ZERO");
	printf("\n[4] - PIZZA");
	printf("\n[5] - VOLTAR");
	
	printf("\nDIGITE A OPCAO: ");
	scanf("%d", &opcao);
	system("cls");
	
	switch(opcao) {
		case 5:
			menuPrincipal();
	}
	
	return opcao;
}
int menuRastrear() {
	int opcao;
	printf("\n[1] - ABRIR NO MAPS");
	printf("\n[2] - ABRIR NO IMAPS");
	printf("\n[3] - ABRIR NO WAZE");
	printf("\n[4] - RECEBER LOGS");
	printf("\n[5] - VOLTAR");
	
	printf("DIGITE A OPCAO: ");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao) {
		case 5:
			menuPrincipal();
	}
}

int menuReportar() {
	int opcao;
	printf("\n[1] - ABRIR UM CHAMADO");
	printf("\n[2] - FAZER LIGACAO");
	printf("\n[3] - STATUS DO CHAMADO");
	printf("\n[4] - VOLTAR");
	
	printf("\nDIGITE A OPCAO: ");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao) {
		case 4: 
			menuPrincipal();
	}
}

