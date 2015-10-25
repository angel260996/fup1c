
#include <stdio.h>

int A1;
int bits;
int bytes;
int kilo;
float giga;
float tera;

int main ()

{
    printf("Dame el numero que deseas convertir a megabits:");
    scanf ("%d",&A1);
	bits=8*1024*1024*A1;
    printf("El resultado en bits es: %d\n",bits);
    bytes=1024*1024*A1;
    printf("El resultado en bytes es: %d\n",bytes);
    kilo=1024*A1;
    printf("El resultado en Kilobytes es: %d\n",kilo);
    giga=(float)A1/1024;
    printf("El resultado en gigabytes es: %f\n",giga);
    tera=(float)A1/1048576;
    printf("El resultado en terabytes es: %f\n",tera);
    system("pause");
}
