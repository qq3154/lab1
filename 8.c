#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,m,o,p;
	printf("numbers of days :");
	scanf("%d",&n);
	m=n / 365;
	o= (n- (m*365)) / 7;
	p= n-(m*365)-(o*7);
	printf("Year: %d \nWeeks: %d\nDays: %d ",m,o,p);
	return 0;
}
