/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	Ler uma temperatura em Fahrenheit 
			e a apresente convertida em graus 
			Celsius. A fórmula de conversão é 
			C = (F – 32) * (5/9), na qual F é 
			a temperatura em Fahrenheit e C é 
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
	printf("A temperatura em Celsius é: %d",C);
	return(0);
}
