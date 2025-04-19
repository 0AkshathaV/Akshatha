#include<stdio.h>
int fact(int n);
int main(){
	int n, value=0;
	printf("\nEnter  the value of n:");
	scanf("%d", &n);
	value=fact(n);
	printf("\nValue of factorial  = %d", value);
