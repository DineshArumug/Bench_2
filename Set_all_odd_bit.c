//Set all even bit position in uint16_t variable

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
	uint8_t i;
	printf("Enter the any value \n");
	scanf("%hd",&value);
	printf("Before clearing\n");
	print(value);
	for(i=0;i<16;i++)
	{
		if(i%2 != 0)
			value = value | (1<<i);
	}
	printf("After cleaning\n");
	print(value);

}
