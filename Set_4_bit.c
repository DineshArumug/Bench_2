//Set 4 bit in unit16_t variable from selected bit position 

#include<stdio.h>
#include<stdint.h>
/*
void print(uint16_t value)
{
	uint8_t i=0;
	for(i=15;i>=0;i--)
		printf("%d ",1&(value>>i));
	printf("\n");
}*/
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
	printf("Enter the value\n");
	scanf("%hd",&value);
	print(value);
	printf("Enter the position\n");
	scanf("%hhd",&position);
	for(i=position;i<position + 4;i++)
		value = value | (1<<i);
	print(value);
}
