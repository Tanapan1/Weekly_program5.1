#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

int main() {
	char input[50];
	int i;
	printf("Enter your string : ");
	gets(input);
	
	for (i = 0; i < strlen(input); i++) {
		if(isupper(input[i])){
			input[i] = tolower(input[i]);
		}
		else if(islower(input[i])){
			input[i] = toupper(input[i]); 
		}
	}
	printf("%s", input);
	return 0;
}