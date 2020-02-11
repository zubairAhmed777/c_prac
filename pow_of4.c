#include<stdio.h>

int power_of2(int n)
{
	return (!(n & n-1) && n);
}

int power_of4(int n)
{
	return (power_of2(n) && !(n & 0xAAAAAAAA));
}

int main(void)
{

int a;
printf("Enter number\n");
scanf("%d",&a);
if(power_of4(a))
	printf("%d is Power of 4\n",a);
else
	printf("%d is not power of 4\n",a);

return 0;
}

