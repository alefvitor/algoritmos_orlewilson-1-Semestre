/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int num, ant, suc;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Defina um n�mero: ");
	scanf("%d",&num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("Antecessor: %d \n",ant);
	printf("Sucecessor: %d",suc);
	return(0);
}
