#include <stdio.h>
#include <stdlib.h>

       	 //\\
        //18\\
      //Sh1nIK\\

int main () {
	int X;
	int valor1, valor2, soma, subtracao, multi, div;
	do{
	system("clear");
	X=0;
	printf("Calcuradora 2.0\n");
	printf("Digite o numero: ");
	scanf("%i", &valor1);

	system("clear");

	printf("Digite outro numero:");
	scanf("%i", &valor2);

	soma = valor1 + valor2;
	subtracao = valor1 - valor2;
	multi = valor1 * valor2;
	div = valor1 / valor2;

	printf("SOMA: %i\n", soma);
	printf("SUBTRACAO: %i\n", subtracao);
	printf("MULTI: %i\n", multi);
	printf("DIV: %i\n", div);

	printf("Deseja continuar{S=1/N=0}\nDigite:");
        scanf("%d", &X);

	}while(X);
	return 0;
}
