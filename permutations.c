#include<stdio.h>

int main(void)
{
int i,j,k;

char c[3]={'a','b','c'};

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
//if(i!=j&&j!=k&&k!=i)
{
	printf("%c%c%c\n",c[i],c[j],c[k]);
}
}
}
}
return 0;
}
