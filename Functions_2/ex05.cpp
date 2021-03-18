#include <stdio.h>

int x;

void fac(int y){
	int i, f, n = y;
	for(i = y; i >= 1; i--){
	f = n * i;
	n = f;
	}
	printf("The factorial is %d", n);
}

int main(){
	printf("introduce the number\n");
	scanf("%d", &x);
	fac(x);
return 0;
}
