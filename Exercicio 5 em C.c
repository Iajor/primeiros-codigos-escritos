#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    //divisao
    float numero1, numero2, divisao1, divisao2;
        
    printf("Digite o primeiro n�mero: \n");
    scanf("%f",&numero1);
    printf("Digite o segundo n�mero: \n");
    scanf("%f",&numero2);
    divisao1=numero1/numero2;
    divisao2=numero2/numero1;
    printf("Realizei duas divis�es: o primeiro n�mero dividido pelo segundo n�mero resulta em %.2f, e o segundo n�mero dividido pelo primeiro n�mero, em %.2f!", divisao1, divisao2);
    
    
}

