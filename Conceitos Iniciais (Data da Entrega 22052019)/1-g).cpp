/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler um n�mero do tipo real e 
			imprimir a quinta parte deste 
			n�mero. 
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

float num, quintaParte;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f",&num);
	
	quintaParte = num * 1/5;
	
	printf("A quinta parte de %f �: %f", num, quintaParte);
	return(0);
	}
