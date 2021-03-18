#include <stdio.h>

int a, b, c;

void MAX(int d, int e, int f){
	int g;
	if (d > e && d > f){
		g = d;
	}
	else if(e > d && e > f){
		g = e;
	}
	else{
		g = f;
	}
	printf("The greater number is %d", g);
}

int main(){
	printf("Input the three numbers\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	MAX(a,b,c);
	
	return 0;
}
