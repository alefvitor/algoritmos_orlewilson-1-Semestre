/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler um n�mero do tipo real e imprimir o resultado do quadrado desse n�mero. 
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

float num;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um n�mero: ");
	scanf("%f",&num);
	
	num = num * num;
	
	printf("O quadrado do n�mero �: %.2f",num);
	return(0);
}
