/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Calcule quantas notas de 50, 10 e 1 
			s�o necess�rias para pagar uma conta 
			cujo valor � fornecido pelo usu�rio.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("Informe um valor da conta em Reais: ");
	int valor; //declarando variavel do tipo inteiro.
	scanf ("%d",&valor); //lendo com os valores inteiros.
	
	//declarando as variaveis e atribuindo fun��es
	int v50 = valor / 50; 
	valor = valor - v50 * 50;
	
	int v10 = valor / 10;
	valor = valor - v10 * 10;
	
	int v1 = valor;
	
	//apresentando valores
	printf("\nA qntd de notas de 50 �: %d", (v50));
	printf("\nA qntd de notas de 10 �: %d", (v10));
	printf("\nA qntd de notas de 1 �: %d", (v1));
	
		return (0);
	
}

