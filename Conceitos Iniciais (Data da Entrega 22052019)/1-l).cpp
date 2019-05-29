/*
Aula:       Algoritimos Computacionais
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Data:       20/05/2019
Descrição:	O número 3025 possui uma 
			característica interessante, 
			sendo a seguinte: 30 + 25 = 55 e 55^2 = 3025.
			Elabore um algoritmo que verifique se 
			um número inteiro de quatro algarismos 
			(digitado) tem essa propriedade ou não.
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>

int num;
main()
{	
	setlocale(LC_ALL, "Portuguese");
	printf("Entre com um valor até 9999: ");
	scanf("%d",&num);
	
	while (num <= 9999)
	{
		if (num == (((num/100)+(num%100))*((num/100+num%100))))
				printf ("%d: %d+%d=%d -> %d^2=%d \n", num,num/100,num%100,(num/100)+(num%100),(num/100)+(num%100),num);
		num = num + 1;
	}
	getchar();
}
