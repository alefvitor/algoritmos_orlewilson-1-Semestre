/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler uma temperatura em Fahrenheit 
			e a apresente convertida em graus 
			Celsius. A f�rmula de convers�o � 
			C = (F � 32) * (5/9), na qual F � 
			a temperatura em Fahrenheit e C � 
			a temperatura em Celsius.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int F, C;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Defina a temperatura em Fahrenheit: ");
	scanf("%d",&F);
	C = (F - 32) * 5/9;
	printf("A temperatura em Celsius �: %d",C);
	return(0);
}
