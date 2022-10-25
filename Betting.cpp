#include<stdio.h>

int main(){
	
	double firstPerc;
	scanf("%lf", &firstPerc); getchar();
	
	printf("%.10lf\n", (1/firstPerc)*100);
	printf("%.10lf", (1/(100-firstPerc))*100);
}
