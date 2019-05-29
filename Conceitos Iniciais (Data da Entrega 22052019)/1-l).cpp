/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      �lef Vitor
Data:       20/05/2019
Descri��o:	O n�mero 3025 possui uma 
			caracter�stica interessante, 
			sendo a seguinte: 30 + 25 = 55 e 55^2 = 3025.
			Elabore um algoritmo que verifique se 
			um n�mero inteiro de quatro algarismos 
			(digitado) tem essa propriedade ou n�o.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int num;
main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("Entre com um valor at� 9999: ");
	scanf("%d",&num);
	
	while (num <= 9999)
	{
		if (num == (((num/100)+(num%100))*((num/100+num%100))))
				printf ("%d: %d+%d=%d -> %d^2=%d \n", num,num/100,num%100,(num/100)+(num%100),(num/100)+(num%100),num);
		num = num + 1;
	}
	getchar();
}
