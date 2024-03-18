//How to know the if a given number is power of 2 using bitwise operator

#include<stdio.h>

int main()
{
	int value;
	printf("Enter the any value\n");
	scanf("%d",&value);
	if((value&(value-1)) == 0)
		printf("power of 2 = %d ",value);
	else
		printf("Not a Power of 2 = %d",value);
}
