//Clear 4 bits in uint16_t variable from selected bit position 

#include<stdio.h>
#include<stdint.h>

void print(uint16_t value)
{
	int i;
	for(i=15;i>=0;i--)
		printf("%d ",1&(value>>i));
	printf("\n");
}
int main()
{
	uint16_t value;
	uint8_t position,i;
	printf("Enter the any value\n");
	scanf("%hd",&value);
	print(value);
	printf("Enter the any position\n");
	scanf("%hhd",&position);
	for(i=position;i<position+4;i++)
		value = value&~(1<<i);
	print(value);
}
