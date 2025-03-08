#include<stdio.h>
int main(){
	int arr[10], size, i, sum=0;

	printf("Enter array elements:");
	for(int i=0;i<10;i++){
	 scanf("%d", &arr[i]);
       }
	for(int i=0;i<10;i++){
	  sum=sum+arr[i];

       }
	 
	 printf("Sum of array:%d\n",sum);

	 return 0;
}
