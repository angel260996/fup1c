#include <stdio.h>

int calificacion;

int main ()


{
		printf("programa que te da la aprovacion de materias de si o no\n");
		printf("introduce tu calificacion ");
		scanf("%d",&calificacion);
		printf("tu calificacion es: %d\n", calificacion);
		if(calificacion >=7)
		{
			printf("aprobado\n");
		}
		else
		{
			printf("reprobado\n");
		}
		system("pause");
			
}
