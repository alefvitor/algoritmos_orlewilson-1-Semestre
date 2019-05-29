/*
Aula:       Algoritimos Computacionais exc 3
Prof.       Orlewilson Maia
Aluno:      Álef Vitor
Hora:		03:42
Data:       28/05/2019
Descrição:	Fluxograma
*/
//incluindo bibliotecas
#include <stdio.h>
#include <locale.h>
int N, C1, C2, R, P, S;

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	printf("Digite um número: ");
	scanf("%d",&N);
	
	if (N<=0){
	printf("\nFim do programa!\n\nVerificador:\nC1: %d\nS: %d\nC2: %d\nP: %d",C1,S,C2,P);	
		}
	else {
			C1 = 1;
		S = 0;
		C2 = 1;
		P = 0;
		
		if (C2<=C1){
			if (P <= 2){
				C1 = C1 + 1;
			}else{
				S = S + C1;
				C1 = C1 + 1;
				if (C1 > N){
					C2 = 1;
					P = 0;
				}else{
					printf("Valor de S: %d",S);
				}
			}
		}else{
			R = C1 % C2;
			if (R == 0){
				C2 = C2 + 1;
			}else{
				P = P + 1;
				C2 = C2 + 1;
			}
		}
		
		printf("\n\nVerificador:\nC1: %d\nS: %d\nC2: %d\nP: %d",C1,S,C2,P);
	
	}
	
	
	
	
	
	
	
	
	
	
}

