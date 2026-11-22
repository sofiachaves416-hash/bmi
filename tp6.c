#include <stdio.h>
#define PI 3.14159

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main(void) {
	int opcion;
	float longitud, altura, radio, area, perimetro;
	
	while (1) {
		printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo): ");
		scanf("%d", &opcion);
		
		if (opcion == 1 || opcion == 2) {
			break;
		}
		
		printf("Error. La opcion debe ser 1 o 2.\n");
	}
	
	if (opcion == 1) {
		printf("Opcion de rectangulo seleccionada\n");
		
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		
		printf("Ingerse la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
	}
	
	else {
		printf("Opcion de circulo seleccionada\n");
		
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
	}
	
	imprimirResultados(area, perimetro);
	
	return 0;
}

float calcularAreaRectangulo(float longitud, float altura) {
	return longitud*altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud+altura);
}

float calcularAreaCirculo(float radio) {
	return PI *radio *radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 *PI *radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
	
}
