#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float average=0.0,sum=0.0;
	float numbers[8];
	int i;
	for(i=0;i<8;i++)
	{
		printf("enter number into the array: ");
		scanf("%f",&numbers[i]);
	}
	for(i=0;i<8;i++)
	{
		sum=numbers[i]+sum;
	}
	average=sum/8;
	
	printf("average of the elements of the array: %.3f",average);

	return 0;
}