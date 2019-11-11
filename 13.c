#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,n;
	printf("Input the first integer: ");
	scanf("%d",&a);
	printf("Input the second integer: ");
	scanf("%d",&b);
	printf("Input the third integer: ");
	scanf("%d",&c);
	if ((a>=b) && (a>=c)){
		n=a;	
	}
	else {
		if (b>=c) n=b;	
		else n=c;	
	} 
	printf("Maximum value of three integers: %d",n);
	return 0;
}
