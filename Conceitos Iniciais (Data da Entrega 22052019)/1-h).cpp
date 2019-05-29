/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Tr�s amigos jogaram na loteria. Caso eles ganhem, 
			o pr�mio deve ser repartido proporcionalmente ao 
			valor que cada deu para a realiza��o da aposta. 
			Fa�a um programa que leia quanto cada apostador 
			investiu, o valor do pr�mio, e imprima quanto cada 
			um ganharia do pr�mio com base no valor investido. 
*/
//incluindo bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

float quantP1, quantP2, quantP3, valorPremio, parteP1, parteP2, parteP3;

int main(){
	setlocale(LC_ALL, "Portuguese");

	printf("Digite valor do pr�mio: ");
	scanf("%f", &valorPremio);
	printf("Digite a quantia do apostador 1: ");
	scanf("%f", &quantP1);
	printf("Digite a quantia do apostador 2: ");
	scanf("%f", &quantP2);
	printf("Digite a quantia do apostador 3: ");
	scanf("%f", &quantP3);
		
	parteP1 = quantP1 / (quantP1 + quantP2 + quantP3);
	parteP2 = quantP2 / (quantP1 + quantP2 + quantP3);
	parteP3 = quantP3 / (quantP1 + quantP2 + quantP3);
	
	printf("\nO apostador 1 ganhou: %.2f \nO apostador 2 ganhou: %.2f \nO apostador 3 ganhou: %.2f ", valorPremio * parteP1, valorPremio * parteP2, valorPremio * parteP3);
	
	return(0);
}
