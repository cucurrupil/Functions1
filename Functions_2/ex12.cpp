#include <stdio.h>
#include <string.h>
//program to know if a word is palindrome
char w[30];
char w1[30];
char w2[30];
int i;
int j;

int main(){

fgets(w, 30, stdin);
j = strlen(w) - 1; 
for(i = 0; i <= strlen(w) - 1; i++){ //for to form the inverted variable
	w1[j] = w[i];
	w2[i] = w1[j];
	j --;
}
if (w2 == w1){
	printf("\nThe word is palindrome");
}
else{
	printf("\nThe word is not palindrome");
}

printf("\n%s %s", w1, w2);
return 0;
}