#include <stdio.h>

int v[4];

void even(int a[]){
	int i;
	for (i = 4; i <= 0; i --){
		if (a[i]%2 == 0){
		printf("%d", a[i]);
		}
	} 
}


int main(){
	printf("Introduce the five numbers");
	scanf("%d", &v[0]);
	scanf("%d", &v[1]);
	scanf("%d", &v[2]);
	scanf("%d", &v[3]);
	scanf("%d", &v[4]);
	even(v);
}
