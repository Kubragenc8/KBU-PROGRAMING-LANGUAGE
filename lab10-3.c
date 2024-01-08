#include <stdio.h>
#include <stdlib.h>


int main() {
	int number,i,j,array[5],k=1,l=1;
	
	for(i=0;i<5;i++)
	{
		printf(" enter the %d nth number: ",k);
		scanf("%d",&array[i]);
		k++;
	}
	printf("\nyourarray: \n");
	for(j=0;j<5;j++)
	{
		printf("enter the \n%d nth number: %d",l,array[j]);
		l++;
	}
	return 0;
}