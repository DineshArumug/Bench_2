//Count the number of bits required for a given integar number

#include<stdio.h>

int main()
{
	signed int value,i,count;
	printf("Enter the any value \n");
	scanf("%d",&value);
	for(i=31;i>=0;i--)
		if(1&(value>>i))
			break;
	printf("Required bit is %d\n", i+1);
	for(i;i>=0;i--)
		printf("%d ",1&(value>>i));
	printf("\n");

}
