#include<stdio.h>
#include<stdlib.h>

float calcularMedia(float nota1, float nota2) {
	return (nota1 + nota2) / 2;
}

int main() {
	float u1_n1, u1_n2, u2_n1, u2_n2, u3_n1, u3_n2;
	printf("1� user: Digite a nota 1:");
	scanf("%f", &u1_n1);
	printf("1� user: Digite a nota 2: ");
	scanf("%f", &u1_n2);
	
	float media_aluno1 = calcularMedia(u1_n1, u1_n2);
	
	printf("2� user: Digite a nota 1:");
	scanf("%f", &u2_n1);
	printf("2� user: Digite a nota 2:");
	scanf("%f", &u2_n2);
	
	float media_aluno2 = calcularMedia(u2_n1, u2_n2);
	
	printf("3� user: Digite a nota 1:");
	scanf("%f", &u3_n1);
	printf("3� user: Digite a nota 2:");
	scanf("%f", &u3_n2);
	
	float media_aluno3 = calcularMedia(u3_n1, u3_n2);
	
	system("cls");
	
	printf("\n1� user: nota %.2f", media_aluno1);
	printf("\n2� user: nota %.2f", media_aluno2);
	printf("\n3� user: nota %.2f", media_aluno3);
	
	return 0;
}
