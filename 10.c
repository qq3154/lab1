#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Input the first integer: ");
	scanf("%d",&a);
	printf("Input the second integer: ");
	scanf("%d",&b);
	printf("Product of the above two integers = %d",a*b);
	return 0;
}
