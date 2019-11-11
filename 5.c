#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h;
	int w;
	printf("height and width :");
	scanf("%d %d", &h,&w);
	printf("Perimeter of the rectangle = %d inches",(h+w)*2);	
	printf("\nArea of the rectangle = %d square inches",h*w);
	return 0;
}
