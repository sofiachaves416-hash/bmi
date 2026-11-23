// https://github.com/sofiachaves416-hash/bmi

#include <stdio.h>

#define TAM 5

int main (void) {
	int codigos[TAM];
	float precios[TAM];
	int i, posMayor, posMenor;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		while (1) {
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			
			if (codigos[i] >= 1 && codigos[i] <= 999999999) {
				break;
			}
			printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
		}
		
		while (1) {
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
			
			if (precios[i] >= 0) {
				break;
			}
			printf("Error. El precio no puede ser negativo.\n");
		}
	}
	
	printf("\nCodigo\t\tPrecio\n");
	
	for (i = 0; i< TAM; i++) {
		printf("%9d\t%10.2f\n", codigos[i], precios[i]);
	}
	
	posMayor = 0;
	posMenor = 0;
	
	for(i = 1; i < TAM; i++) {
		if(precios[i] > precios[posMayor]) {
			posMayor = i;
		}
		
		if(precios[i] < precios[posMenor]) {
			posMayor = i;
		}
		
		if(precios[i] < precios[posMenor]) {
			posMenor = i;
		}
	}
	printf("\nMas caro: [%d] %.2f\n", codigos[posMayor], precios[posMayor]);
	printf("Mas barato: [%d] %.2f\n", codigos[posMenor], precios[posMenor]);
	
	return 0;
}
