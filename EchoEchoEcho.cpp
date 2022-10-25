#include<stdio.h>

int main(){
	
	char prompt[20];
	scanf("%[^\n]", prompt); getchar();
	
	printf("%s %s %s", prompt, prompt, prompt); 
	
	return 0;
}
