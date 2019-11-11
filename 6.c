#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n;
	printf("Radius = ");
	scanf("%f",&n);
    printf("Perimeter of the Circle = %f inches\nArea of the Circle = %f square inches",2*n*M_PI,n*n*M_PI);
	return 0;
}
