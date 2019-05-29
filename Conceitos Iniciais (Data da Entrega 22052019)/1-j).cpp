/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	Ler os valores de COMPRIMENTO, 
			LARGURA e ALTURA e apresentar o 
			valor do volume de uma caixa retangular. 
			Utilize para o c�lculo a f�rmula 
			VOLUME = COMPRIMENTO * LARGURA * ALTURA.
*/

//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

//declarando variav�is do tipo float-real.
float larg, comp, alt, vol;

//iniciando a main inteira.
int main()
{
	setlocale(LC_ALL, "Portuguese"); //definindo linguagem para acentos.
	
	//entrando e lendo com os valores reais.
	printf("Entre com o Comprimento: ");
		scanf("%f \n",&comp);
	printf("Entre com a Largura: ");
		scanf("%f \n",&larg);
	printf("Entre com a Altura: ");
		scanf("%f \n",&alt);
	
	//executando o calculo com a formula
	vol = (comp * larg * alt);
	
	//mostrando os valores processados no calculo
	printf("Volume da Caixa �: %f \n", vol);
	
		return(0);

}
