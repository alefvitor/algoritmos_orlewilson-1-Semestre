/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler dois valores para as vari�veis A e B, 
			efetuar a troca dos valores de forma que a 
			vari�vel A passe a ter o valor da vari�vel B 
			e que a vari�vel B passe a ter o valor da 
			vari�vel A. Imprimir os valores trocados.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int a, b, c;

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf ("Insira valor A: ");
	scanf("%d",&a);
	printf ("Insira valor B: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("O novo valor de A �: %d \n",a);
	printf("O novo valor de B �: %d",b);
	return(0);
}
