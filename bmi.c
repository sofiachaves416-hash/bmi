#include <iostream>
using namespace std;

int main(void) {
	float peso, altura, bmi;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	bmi = peso / (altura * altura);
	
	printf("\nSu indice de masa corporal es: %.2f\n\n", bmi);
	printf("Indice\t\tCondicion\n");
	printf("-------------------------\n");
	printf("<18.5\t\tBajo peso\n");
	printf("18.5-24.9\tNormal\n");
	printf("25.0-29.9\tSobrepeso\n");
	printf(">=30\t\tObesidad\n");
	
	return 0;
}

