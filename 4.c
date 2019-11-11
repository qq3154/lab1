#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[10];
	int i,j=0;
	printf("nhap 3 ki tu ");
	fgets(a,100,stdin);
	printf("dao nguoc cua %s la ",a);
	for(i=strlen(a)-1;i>=0;i--){
	    if (a[i]!=' ') 	printf("%c ",a[i]);
	}
	 
	return 0;
}
