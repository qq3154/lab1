#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m,n,a,b;
	printf("Weight - Item1: ");
	scanf("%f",&m);
	printf("No. of item1: ");
	scanf("%f",&a);
	printf("Weight - Item2: ");
	scanf("%f",&n);
	printf("No. of item2: ");
	scanf("%f",&b);
	printf("Average Value = %f",(m*a+n*b)/(a+b));
	return 0;
}
