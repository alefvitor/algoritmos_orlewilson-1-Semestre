/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler quatro notas, calcular a m�dia aritm�tica e imprimir o resultado.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Entre com a 1a nota: ");
	float n1;
	scanf("%f",&n1);

	printf("Entre com a 2a nota: ");
	float n2;
	scanf("%f",&n2);
	
	printf("Entre com a 3a nota: ");
	float n3;
	scanf("%f",&n3);
	
	printf("Entre com a 4a nota: ");
	float n4;
	scanf("%f",&n4);
	float ma;
	
	ma = ((n1+n2+n3+n4)/4);
	
	printf("A m�dia aritim�tica da notas �: %.1f",ma);
	
	return(0);
	
}
