#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	//divisao apenas se nenhum dos n�meros for zero
	float numero1, numero2, divisao1, divisao2;
        
    printf("Digite o primeiro n�mero: \n");
    scanf("%f",&numero1);
    printf("Digite o segundo n�mero: \n");
    scanf("%f",&numero2);
    
    if (numero1>0 && numero2>0){
	   	divisao1=numero1/numero2;
    	divisao2=numero2/numero1;
    	printf("Realizei duas divis�es: o primeiro n�mero dividido pelo segundo n�mero resulta em %.2f, e o segundo n�mero dividido pelo primeiro n�mero, em %.2f!", divisao1, divisao2);
	}else{
		printf("A divis�o n�o foi realizada, uma vez que um dos n�meros � zero!");
}
}
