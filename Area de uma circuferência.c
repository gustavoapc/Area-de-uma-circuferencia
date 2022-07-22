#include <stdlib.h>
#include <stdio.h>
//Faça um programa em C que calcule a área de 
//uma circunferência dado o raio como entrada?

int main()
{
	float pi,raio,area;
	pi=3.14;
	printf("digite o raio:\n");
	scanf("%f",&raio);
	area=pi*(raio*raio);
	printf("a area da circuferencia e de:\n%.2f",area);;
	return 0;
}