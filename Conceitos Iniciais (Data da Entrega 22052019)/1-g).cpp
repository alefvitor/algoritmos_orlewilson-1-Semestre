/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	Ler um número do tipo real e 
			imprimir a quinta parte deste 
			número. 
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

float num, quintaParte;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número: ");
	scanf("%f",&num);
	
	quintaParte = num * 1/5;
	
	printf("A quinta parte de %f é: %f", num, quintaParte);
	return(0);
	}
