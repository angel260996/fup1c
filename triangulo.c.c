#include<stdio.h>

int N1;
int N2;
int total;
int total2;
int main()

{
	printf("area de un triangulo\n");
	printf("base\n");
	scanf("%d",& N1);
	printf("altura\n");
	scanf("%d",& N2);
	total=N1*N2;
	printf("el resultado de  \n,base\n %d * \n,altura\n %d es: %d\n",N1,N2,total);
	total2=total/2;
	printf("sobre 2\n %d / %d resultado: %d\n",total,2,total2);
}
