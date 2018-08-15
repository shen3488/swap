#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a=2;
	int b=3;
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	int temp=b;
	b=a;
	a=temp;

	printf("after swap\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	return 0;
}
