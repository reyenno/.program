#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	float a,b,c,d,e;
	
	printf("================================================== \n ");
	printf("Apliksi Pencari Sisi Miring Segitiga siku-siku \n");
	printf("================================================== \n ");
	
	printf("Pythagoras \n" );
	printf("Masukan tinggi segitiga : ");
	scanf("%f",&a);
	printf("Masukan alas segitiga : ");
	scanf("%f",&b);
	
	c = a * a;
	d = b * b;
	e = sqrt(c + d);
	printf("Sisi Miringnya : %.2f \n",e);
	system("PAUSE");
	return 0;
	
}
