/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	Ler dois valores para as variáveis A e B, 
			efetuar a troca dos valores de forma que a 
			variável A passe a ter o valor da variável B 
			e que a variável B passe a ter o valor da 
			variável A. Imprimir os valores trocados.
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
	
	printf("O novo valor de A é: %d \n",a);
	printf("O novo valor de B é: %d",b);
	return(0);
}
