/* funções fatorial com Iteracao e Recursividade*/
#include <stdio.h>
int fatorialIterativo(int n);
int fatorialRecurcivo(int n);

int main(){
	int inputA;
	scanf("%d", &inputA);
	printf("fatorialRecurcivo \n %d\n", fatorialRecurcivo(inputA));
	printf("fatorialIterativo\n %d\n", fatorialIterativo(inputA));
	return 0;
}

int fatorialIterativo(int n){
	if(n < 0)
		return -1;	/* error signal*/
	int result = 1;
	for(int i = 1; i <= n; i++){
		result = result * i;
	}
	return result; 
}

int fatorialRecurcivo(int n){
	if(n < 0)
		return -1; /* error signal*/
	//caso base
	if( n == 0){
		return 1;
	}
	//caso recursivo
	return fatorialRecurcivo(n-1)*n;
}
