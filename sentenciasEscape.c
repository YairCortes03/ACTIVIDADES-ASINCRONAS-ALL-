#include<stdio.h>
int main()
{
	char i=161;
	//salto de linea
	printf("---salto de l%cnea---\n",i);
	printf("Hola mundo!!!\n");
	printf("Bienvenidos al curso!!!\n\n");
	//Tabulador horizontal
	printf("---Tabulador horizontal---\n");
	printf("Hola mundo!!!\t");
	printf("Bienvenidos al curso!!!\n\n");
	//caracter de alarma
	printf("---caracter de alarma---\n");
	printf("Hola mundo!!!\a");
	printf("Bienvenidos al curso!!!\n\n");
	//retoceso de carro
	printf("---Retroceso de carro---\n");
	printf("Hola mundo!!!\r");
	printf("Bienvenidos al curso!!!\n\n");
	//retoceso 
	printf("---Retroceso---\n");
	printf("Hola mundo!!!\b");
	printf("Bienvenidos al curso!!!\n\n");


	return 0;
} 