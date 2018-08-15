#include <stdlib.h>
#include <stdio.h>
void swap(int* a,int* b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(void)
{
	int a=9;
	int b=3;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	swap(&a,&b);

	printf("after swap\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	return 0;
}
