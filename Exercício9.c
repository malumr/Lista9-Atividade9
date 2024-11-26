#include <stdio.h>
int multiplicarValores(int v[], int tamanho) {
	int produto = 1;
	for (int i = 0; i < tamanho; i++) {
		produto *= v[i];
	}
	return produto;
}
int main() {
	int tamanho;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	int vetor[tamanho];
	printf("Digite %d valores:\n", tamanho);
	for (int i = 0; i < tamanho; i++) {
		printf("Valor %d: ", i + 1);
		scanf("%d", &vetor[i]);
	}
	int produto = multiplicarValores(vetor, tamanho);
	printf("Resultado da multiplicação dos valores: %d\n", produto);
	return 0;
}