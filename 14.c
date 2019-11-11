#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	float f;
	printf("Input total distance in km: ") ;
	scanf("%d",&d);
	printf("Input total fuel spent in liters: ") ;
	scanf("%f",&f);
	printf("Average consumption (km/lt) %.2f",d/f);
	return 0;
}
