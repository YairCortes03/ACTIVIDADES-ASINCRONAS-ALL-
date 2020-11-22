#include<stdio.h>
int main()
{
	//caracteres
	char c='m';
	char u= 163;
	printf("caracter:%c \n",c );
	printf("caracter en decimal: %d \n",c );
	printf("caracter en decimal: %i \n",c );
	printf("caracter en octal: %o \n",c );
	printf("caracter en hexadecimal: %x \n",c );
	
	// numeros enteros
	short ec=3000;
	printf("N%cmero entero corto: %i \n",u,ec );
	printf("N%cmero entero corto: %d \n",u,ec );
	printf("N%cmero entero corto en octal: %o \n",u,ec );
	printf("N%cmero entero corto en hexadecimal: %x \n",u,ec ); 
	int ec2= -10000;
	printf("N%cmero entero corto: %i \n",u,ec2 );
	
	//numeros enteros largos
	signed long el= 999999999;
	printf("N%cmero entero largo: %ld \n",u,el );
	printf("N%cmero entero largo: %li \n",u,el );
	
	//numeros reales cortos
	float rc=10.143546;
	printf("N%cmero real corto: %f \n",u,rc );
	printf("N%cmero real corto: %e \n",u,rc );
	printf("N%cmero real corto: %g \n",u,rc );

	//numeros reales largos
	double rl= 2.2017021401121993;
	printf("N%cmero real largo: %lf \n",u,rl );
	printf("N%cmero real largo: %.16lf \n",u,rl );

	return 0;
}