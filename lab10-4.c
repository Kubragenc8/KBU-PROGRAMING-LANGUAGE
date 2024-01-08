#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int number,array[10],i,j,k=1;
	printf("enter the elements of your array: \n");
	
	for(i=0;i<10;i++)
	{
		printf("%d th element: \n",k);
		scanf("%d",&array[i]);
		k++;
	}
	printf("the reverse version of the directory: \n");
	for(i=9;i>=0;i--)
	{
		printf("%4d",array[i]);
	}
	
	return 0;
}