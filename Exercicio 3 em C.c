#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
setlocale(LC_ALL, "Portuguese");
	//area circulo
	float raio, pi=3.14, area;
	printf("Digite o raio do c�rculo: \n");
	scanf("%f",&raio);
	area=pi*(raio*raio);
	printf("A �rea do c�rculo � %.2f",area);
	
getch();
}
