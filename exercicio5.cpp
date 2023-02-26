
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario,novoSalario,ValorAumento,percentual;
	printf("Informe o salário: %f\n");
	scanf("%f",&salario);
	
	percentual = 25;
	printf("Percentual : %f\n",percentual);
	
	novoSalario = (salario*1.25);
	
	
	ValorAumento  = (novoSalario - salario);


	printf("Valor do aumento: %.2f\n",ValorAumento);
	
	
	printf("Novo Salário : %.2f\n",novoSalario);
	
	
	return 0;
}
