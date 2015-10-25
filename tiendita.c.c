#include<stdio.h>
#include<stdlib.h>

int N1;
int N2;
int N3;
int N4;
int N5;
int N6;
int N7;
int total;
int total2;
int total3;
int total4;
int total5;
int main()
{
	printf("ingresa 1 si quieres ver el menu o 2 si quieres ver las ganancias\n");
	scanf("%d",& N1);
	switch(N1)
	{
		case 1:{
			printf("usted quiere comprar\n");
			printf("\n1.- papas\n2.- gansito\n3.- queso\n4.- chocorroles\n5.- chocolate\n");
			scanf("%d",& N2);
			switch(N2)
			{
				case 1:{
					printf("papas 10$\n");
					printf("¿cuantos productos quieres?\n");
					scanf("%d",& N3);
					total=10*N3;
					printf("el resultado de %d * %d es: %d\n",10,N3,total);
					break;
				}
				case 2:{
					printf("gansito8$\n");
					printf("¿cuantos productos quieres?\n");
					scanf("%d",& N4);
					total2=8*N4;
					printf("el resultado de %d * %d es: %d\n",8,N4,total2);
					break;
				}
				case 3:{
					printf("queso 12$$\n");
					printf("¿cuantos productos quieres?\n");
					scanf("%d",& N5);
					total3=12*N5;
					printf("el resultado de %d * %d es: %d\n",12,N5,total3);
					break;
				}
				case 4:{
					printf("chocorroles 14$\n");
					printf("¿cuantos productos quieres?\n");
					scanf("%d",& N6);
					total4=14*N6;
					printf("el resultado de %d * %d es: %d\n",14,N6,total4);
					break;
				}
				case 5:{
					printf("chocolate 7$\n");
					printf("¿cuantos productos quieres?\n");
					scanf("%d",& N7);
					total5=7*N7;
					printf("el resultado de %d * %d es: %d\n",7,N7,total5);
					break;
				}
			}
			
			break;
		}
		case  2:{
			printf("usted quiere ver las ganacias\n");
			printf("las ganacias son de 699$");
			break;
		}
		default:{
			printf("solo opcciones 1 y 2 \n");
		}
	}
	system("pause");
}
