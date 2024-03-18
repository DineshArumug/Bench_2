//Count the number of 1s in a given integer number.

#include<stdio.h>

void print(int value)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d ",1&(value>>i));
	printf("\n");
}

int main()
{
	int value,i,count = 0;
	printf("Enter the value\n");
	scanf("%d",&value);
	print(value);
	for(i = 0;i<=31;i++)
		if(1&(value>>i))
			count++;
	printf("Count the number 1's in the given number is %d\n",count);
}
