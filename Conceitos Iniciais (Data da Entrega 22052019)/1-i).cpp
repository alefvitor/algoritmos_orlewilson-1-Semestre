/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	As lojas de um shopping center est�o concedendo 
			10% de desconto no pre�o de qualquer produto. 
			A partir do valor fornecido, calcule e exiba o 
			pre�o atual e o pre�o com o desconto.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float precoAtual,desconto;
	
	printf("Informe o pre�o atual do produto: ");
	scanf("%f",&precoAtual);
	
	desconto = precoAtual*0.10;
	
	printf("\n\nValor do protudo atual: %.2f",precoAtual);
	printf("\n\nValor com desconto de 10%%: %3.2f\n\n", precoAtual-desconto);
	
	return (0);
	}

