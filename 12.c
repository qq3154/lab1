#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	float f,h,s;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%d",&n);
	printf("Input the working hrs: ");
	scanf("%f",&h);
	printf("Salary amount/hr: ");
	scanf("%f",&s);
	f=h*s;
	printf("Employees ID = %d",n);
	printf("\nSalary = U$ %.2f",f);
	return 0;
}
