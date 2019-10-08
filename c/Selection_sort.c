#include <stdio.h>

int seletionSort(int num[], int tam);
int seletionSortVisual(int num[], int tam);

int main(){
	int array[5] = {2, 5, 3, 1, 4};
	int array2[5] = {12, 9, 4, 6, 1};
	
	for(int i = 0; i < 5; i++){
		printf("%d ",array[i] );
	}
	printf("\nOrdenando...\n");
	seletionSort(array, 5);

	for(int i = 0; i < 5; i++){
		printf("%d ",array[i] );
	}
	
	printf("\nOrdenando com seletionSortVisual...\n");
	
	seletionSortVisual(array2, 5);

	return 0;
}

int seletionSort(int num[], int tam){
	int i, j, aux, menor;
	for(i = 0; i < tam-1; i++){
		menor = i;
		for( j=i+1; j < tam; j++){
			if(num[menor] > num[j])
				menor = j;
		}
		if(menor != i){
			aux = num[menor];
			num[menor] = num[i];
			num[i] = aux;
		}
	}
}

int seletionSortVisual(int num[], int tam){
	int i, j, k, aux, menor;
	for(i = 0; i < tam-1; i++){
		menor = i;
		for(j = i+1; j < tam; j++){
			if(num[menor] > num[j])
				menor =j;
		}
		if(menor != i){
			aux = num[menor];
			num[menor] = num[i];
			num[i] = aux;
		}
		for( k = 0; k < tam; k++)
			printf("[%d]",num[k] );
		printf("\n");
	}
}
