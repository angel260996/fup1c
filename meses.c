#include<stdio.h>

int mes;

int main()

{
	printf("ingresa el numero del mes del año\n");
	scanf("%d", & mes);
	switch(mes)
	{
		case 1:{
			printf("el mes de enero\n");
			break;
		}
		case 2:{
			printf("el mes de febrero\n");
			break;
		}
		case 3:{
			printf("el mes de marzo\n");
			break;
		}
		case 4:{
			printf("el mes de abril\n");
			break;
		}
		case 5:{
			printf("el mes de mayo\n");
			break;
		}
		case 6:{
			printf("el mes de junio\n");
			break;
		}
		
		case 7:{
			printf("el mes de julio\n");
			break;
		}
		case 8:{
			printf("el mes de agosto\n");
			break;
		}
		case 9:{
			printf("el mes de septiembre\n");
			break;
		}
		case 10:{
			printf("el mes de octubre\n");
			break;
		}
		case 11:{
			printf("el mes de noviembre\n");
			break;
		}
		case 12:{
			printf("el mes de diciembre\n");
			break;
		}
		default:{
			printf("no tiene mes ingrese un numero del 1 al 12\n");
		}
		system("pause");
	}
}
