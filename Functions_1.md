## Functions 1

## exercise 1
```c
#include <string.h>
#include <stdio.h>

char w[30];

void pro(char s[]){
	int i;
	for (i = strlen(s); i >= 0; i--){
		printf("%c", s[i]);
	}
}

int main (){
	printf("Introduce the word\n");
	fgets(w, 30, stdin);
	pro(w);
	return 0;
}
```


## exercise 2
```c
#include <stdio.h>
#include <string.h>
char s1[30], s2[30]; // Program to check wheter a pair of words have the same lenght
int r;

 int lenght(char w1[], char w2[]){
	int D;
	if (strlen(w1) == strlen(w2)){
		D = 1; //equal lenght
	}
	else{
		D = 0; //different lenght
	}

	return D;
}
int main (){
	printf("Introduce the first word and then then the second one\n");
	fgets(s1, 30, stdin);
	fgets(s2, 30, stdin);
	r = lenght(s1,s2);
	printf("%d", r);
	
	return 0;
}
```

## exercise 3
```c
#include <stdio.h>
#include <string.h>
char w1[30];
char w2[30];
char r;
//Program to compare two words, they must have the same lenght and letters otherwise return the different letter from the first word or number 1 (does not have the same lenght)
char pro(char a[], char b[]){
	char val;
	int i;
	if (strlen(a) == strlen(b)){ //compare the lenght of both words
	for(i = 0; i <= strlen(a); i++){
		if(a[i] != b[i]){ //if the value of them differs then cut the for and write the value of 'a' into  the variable
			val = a[i]; // the value to withdraw
			i = strlen(a);
			}
			else{
				val = '0'; //the words are completely equal
				}
		}
		}
		else{
			val = '1'; //this means that the words have not the same lenght
			}
		return val;
	}

int main(){
	printf("Introduce the first word and then the second one\n");
	fgets(w1, 30, stdin);
	fgets(w2, 30, stdin);
	r = pro(w1,w2);
	printf("%c", r);
	
	
	return 0;
	}
```

## exercise 4
```c
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
```

## exercise 5
```c
#include <stdio.h>
#include <string.h>
// Program to change the vowels of a string into spaces
char s[31];

void pro(char ss[]){
	int i;
	for (i = 0; i <= strlen(ss); i ++)
	{
		if(ss[i] == 'a' || ss[i] == 'e' || ss[i] == 'i' || ss[i] == 'o' ||ss[i] == 'u'){ //recognizing vowels in the string
			ss[i] = ' ';// replace the vowels with a space
		}
		
	}
	printf("%s", ss);
}

int main (){
	printf("Introduce the string of up to 30 characters\n");
	fgets(s, 31, stdin);
	pro(s);
}
```
