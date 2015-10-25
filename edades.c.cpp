#include<stdio.h>
#include<stdlib.h>

int edad;

int main()

{
	printf("ingresa tu edad para saber en que etapa te encuentras\n");
	scanf("%d", & edad);
	
	if (edad>0 && edad<=2)
	{
		
		printf("bebe\n");
	}
	if (edad>=3 && edad<=12)
	{
		
		printf("niño\n");
	}
	if (edad>=13 && edad<=18)
	{
		
		printf("adolecente\n");
	}
	if (edad>=19 && edad<=29)
	{
		
		printf("joven\n");
	}
	if (edad>=30 && edad<=59)
	{
		printf("adulto\n");
	}
	if (edad>=60 && edad<=100)
	{
		printf("adulto mayor\n");
	}
	system("pause");
}

