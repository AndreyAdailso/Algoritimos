#include <stdio.h>

int isEven(int n);
int isOdd(int n);
float power(float x, int n);

int main(){
	int expoente;
	float base;

	scanf("%f %d", &base, &expoente);

	printf("O numero Digitado é %s.\n", isEven(expoente)? "Par" : "inpar");
	printf("%.2f^%d = %f\n", base, expoente, power(base, expoente));

	return 0;
}

int isEven(int n){
	return n % 2 == 0;
}

int isOdd(int n){
	return !isEven(n);
}

float power(float x, int n){
	int y;
	/*caso base*/
	if(n == 0){
		return 1;
	}
	/* recursive case: n is nagative*/
	if(n < 0){
		return 1 / power(x, -n);
	}
	/*recursive case: n is odd*/
	if(isOdd(n)){
		return power(x, n-1)*x;
	}
	if(isEven(n)){
		float y = power(x, n/2);
		return y*y;
	}
}