#include <stdio.h>

int x;

void prime(int w){
if (w == 2 || w == 3 || w == 5 || w == 7 || w == 11 || w == 13 || w == 17 || w == 19 || w == 23 || w == 29){
	printf("The number is prime");
}
else{
	printf("it is not prime");
}
}
int main(){
	printf("introduce the number\n");
	scanf("%d", &x);
	prime(x);
	return 0;
}
