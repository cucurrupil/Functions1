#include <stdio.h>
#include <string.h>

char s[30];

void reverse(char r[]){
	int i;
	for (i = strlen(r) - 1; i >= 0; i--){
		printf("%c", r[i]);
	}
}

int main(){
	printf("Introduce the word\n");
	fgets(s, 30, stdin);
	reverse(s);
	return 0;
}

