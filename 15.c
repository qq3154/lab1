#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x1,x2,y1,y2;
	printf("Input x1: ");
	scanf("%d",&x1);
	printf("Input y1: ");
	scanf("%d",&y1);
	printf("Input x2: ");
	scanf("%d",&x2);
	printf("Input y2: ");
	scanf("%d",&y2);
	float f;
	f= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%f",f);
	return 0;
}
