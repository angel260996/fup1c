#include<stdio.h>

int KG;
int N1;
int main()

{
	printf("lavadora\n");
	printf("cuantos KG\n");
	scanf("%d", & KG);
	
	if(KG>=0 && KG<=10)
	{
		printf("minimo\n");
	}
	if(KG>=11 && KG<=15)
	{
		printf("medio\n");
	}
	if(KG>=16 && KG<=20)
	{
		printf("maximo\n");
	}
	if(KG>=21)
	{

		printf("no lava\n");
	}
	
	
	{
		printf("tipo de labado\n");
		scanf("%d",& N1);
		switch(N1)
	
	{
	
	case 1:{
		printf("depacio\n");
		break;
	}
	case 2:{
		printf("normal\n");
		break;
	}
	case 3:{
		printf("sucio\n");
		break;
	}
			default:{
			printf("opccion del 1 al 3\n");
		}
	}
	
	}
}
