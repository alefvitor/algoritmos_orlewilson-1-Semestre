/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	Ler um número do tipo real e imprimir o resultado do quadrado desse número. 
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

float num;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Insira um número: ");
	scanf("%f",&num);
	
	num = num * num;
	
	printf("O quadrado do número é: %.2f",num);
	return(0);
}
