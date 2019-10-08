#include <stdio.h>

void insertin_sort(int A[], int tamanho);
void insert(int array[], int fimIndex, int valor);
void insertionSort(int array[], int tamnaho);

int main(){
	int lot[5] = {3,4,1,5,2};
	
	printf("lot nao ordenado\n");
	for(int cont = 0; cont < 5; cont++)
		printf("[%d]\n", lot[cont]);
	
	insertin_sort(lot, 5);

	printf("lot ordenado\n");
	for(int cont = 0; cont < 5; cont++)
		printf("[%d]\n", lot[cont]);
	
	return 0;
}

void insertin_sort(int A[], int tamanho){
	int i, j, key;
	for(i = 0; i < tamanho; i++){
		key = A[i];
		j = i - 1;
		while( j >= 0 && key < A[j]){
			A[j+1] = A[j];
			j = j-1;
		}
		if(j != i-1)
			A[j+1] = key;
	}
}

void insert(int array[], int fimIndex, int valor){
	int i;
	
	for(i = fimIndex; i >= 0 && array[i] > valor; i--){
		array[i+1] = array[i];
	}
	array[i+1] = valor;
}

void insertionSort(int array[], int tamanho){
	int i;
	
	for(i = 0; i < tamanho; i++){
		insert(array, tamanho, array[i]);
	}
}
