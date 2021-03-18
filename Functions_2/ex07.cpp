#include<string.h>
#include<stdio.h>

char s[30];

void cal(char s1[]){
	int i;
	int U = 0, u = 0;
	for(i = 0; i <= strlen(s1); i++){
		if(s1[i] == 'A' || s1[i] == 'B' || s1[i] == 'C' || s1[i] == 'D' || s1[i] == 'E' || s1[i] == 'F' || s1[i] == 'G' || s1[i] == 'H' || s1[i] == 'I' || s1[i] == 'J' || s1[i] == 'K' || s1[i] == 'L' || s1[i] == 'M' || s1[i] == 'N'){
			U ++;
		}else{
			u ++;
		}
	}
	printf("The number of uppercases is %d and lowcases is %d", U, u);
}

int main(){
	printf("Introduce the words\n");
	fgets(s, 30, stdin);
	cal(s);
	return 0;
}
