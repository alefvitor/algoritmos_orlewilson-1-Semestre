/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int num, ant, suc;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Defina um número: ");
	scanf("%d",&num);
	
	ant = num - 1;
	suc = num + 1;
	
	printf("Antecessor: %d \n",ant);
	printf("Sucecessor: %d",suc);
	return(0);
}
