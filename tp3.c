#include <stdio.h>

int main(void) {
	float peso, altura, bmi;
	
	while (1) {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &peso);
		
		if (peso >= 0) {
			break;
		}
		
		printf("Error. El peso no puede ser negativo.\n");
	}
	
	while (1) {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &altura);
		
		if (altura >= 0) {
			break;
		}
		
		printf("Error. La altura no puede ser negativa.\n");
	}
	
	bmi = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	
	printf("Resultado de su evaluacion:\n");
	printf("-------------------------\n");
	
	if (bmi < 18.5) {
		printf("Indice: <18.5\t\tCondicion: Bajo peso\n");
	}
	else if (bmi < 25.0) {
		printf("Indice: 18.5-24.9\tCondicion: Normal\n");
	}
	else if (bmi < 30.0) {
		printf("Indice: 25.0-29.9\tCondicion: Sobrepeso\n");
	}
	else {
		printf("Indice: >=30\t\tCondicion: Obesidad\n");
	}
	
	printf("-------------------------\n");
	
	return 0;
}
