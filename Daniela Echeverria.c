/*Realizar un programa en C que permita ingresar por teclado los grados centígrados y
Fahrenheit y realice la conversión.*/
#include <stdio.h>//declaracion de librerias
#include <math.h>//declaracion de librerias
void main(){//funcion principal
	float centigrados, fahrenheit;//definir variables
	char grados;//definir variables
	printf ("Ingrese el tipo de grados que desea transformar, (C= Centigrados o F= Fahrenheit) ");//escribir
	scanf ("%c",&grados);//entrada de datos
	if (grados=="c"){
		printf ("Ingrese los grados centigrados ");//escribir
		scanf("%f",&centigrados);//entrada de datos
		fahrenheit=((9/5)*centigrados)+32;//formula
		printf ("Los grados fahrenheit son %f ", fahrenheit);//salida de datos
	}
	else{
		printf ("Ingrese los grados fahrenheit ");//escribir
		scanf("%f",&fahrenheit);//entrada de datos
		centigrados=((fahrenheit-32)/1.8);//formula
		printf ("Los grados centigrados son %f \n", centigrados);//salida de datos
	}
printf("*   * ***** *     *****  *    * *   * *    * ****  *****\n");//imprimir
printf("*   * *   * *     *   *  **  ** *   * **   * *   * *   *\n");//imprimir
printf("***** *   * *     *****  * *  * *   * * *  * *   * *   *\n");//imprimir
printf("*   * *   * *     *   *  *    * *   * *  * * *   * *   *\n");//imprimir
printf("*   * ***** ***** *   *  *    * ***** *   ** ****  *****\n");//imprimir
}

