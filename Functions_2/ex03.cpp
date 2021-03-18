#include <stdio.h>

int a, b, c, d, e;

void MAX(int f, int g, int h, int i, int i1){
	int j;
	j = f * g * h * i * i1;
	printf("The multiply of these numbers is %d", j);
}

int main(){
	printf("Input the five numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &e);
	scanf("%d", &d);
	MAX(a,b,c,d,e);
	
	return 0;
}
