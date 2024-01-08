#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int numberofelements=0,numbers[10];
	int i,j,enterednumber;
	
	printf("Enter numbers into the array to finish -1 \n");
	
	while(enterednumber!=10)
	{
		scanf("%d",&enterednumber);
		if(enterednumber==-1)
		{
			break;
		}
		numbers[i]=enterednumber;
		i++;

	}
	printf("\nsquare of the entered numbers: \n");
	for(j=0;j<i;j++)
	{
		printf("square of \n%d: %d\n",numbers[j],numbers[j]*numbers[j]);
	}

	return 0;
}