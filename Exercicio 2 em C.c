#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	// area triangulo equilatero
	float lado, area;
	printf("Digite o lado do tri�ngulo equil�tero: \n");
	scanf("%f",&lado);
	area=((lado*lado)*(sqrt(3))/4);
	printf("A �rea do tri�ngulo � %.2f", area);
	

getch();
}

