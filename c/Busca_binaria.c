#include <stdio.h>

int main(){
	int alvo, min, max, chute;
	int lista[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	scanf("%d", &alvo);
	min = 0;
	max = 25-1;
	while(1){
		chute = (min + max)/2;
		if(max < min){
			printf("-1\n");
			break;
		}
		if(lista[chute] == alvo){
			printf("%d\n",chute);
			break;
		}
		if(lista[chute] < alvo){
			min = chute + 1;
		}else{
			max = chute - 1;
		}
	}
	return 0;
}