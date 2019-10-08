#include <stdio.h>
#include <string.h> /*Biblioteca que contem a função strlen()*/

char lastCharacter(char s[]);
char firstCharacter(char s[]);
void sliceString(char s[]);
int polindromo(char str[]);

int main(){
	char string[80];
	char var;

	printf("Digite uma palavra para verificar se e um polindromo.\n");
	scanf("%s", &string);

	printf("%s um polindromo.\n", polindromo(string)?"É" : "Nao é");

	return 0;
}

char lastCharacter(char s[]){
	int tam;
	tam = strlen(s);
	return s[tam-1];
}

char firstCharacter(char s[]){

	return s[0];
}

void sliceString(char s[]){
	int tam = strlen(s);
	for(int i = 0; i<tam;i++){
		s[i] = s[i+1]; 
	}
	s[tam-2] = '\0';
}
int polindromo(char str[]){
	int tamStr = strlen(str);
	/*caso base 1*/
	if(tamStr <= 1)
		return 1;
	/*caso base 2*/
	if(firstCharacter(str) != lastCharacter(str))
		return 0;
	/*caso recursivo*/
	sliceString(str);
	return polindromo(str);
}
