#include <stdio.h>

int n, rs, ri;

void pro(int n1, int rs1, int ri1){
	if (n1 <= rs1 && n1 >= ri1){
		printf("The number is on the range");
	}
	else{
		printf("The number is not on the range");
	}
}

int main(){
	printf("Introduce the range inferior, then the superior and lastly the number\n");
	scanf("%d", &ri);
	scanf("%d", &rs);
	scanf("%d", &n);
	pro(n, rs, ri);
	return 0;
}
