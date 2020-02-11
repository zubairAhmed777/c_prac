#include<stdio.h>
#include<stdlib.h>


int main(void)
{
int **a=NULL,i,j;
int count=0;

a=(int **)malloc(2*sizeof(int *));

for(i=0;i<2;i++)
	a[i]=(int *)malloc(3*sizeof(int));

for(i=0;i<2;i++){
for(j=0;j<3;j++){
	a[i][j]=count;count++;}}
for(i=0;i<2;i++)
{{
for(j=0;j<3;j++)
	printf("%d\t",a[i][j]);
}
printf("\n");
}
//printf("\n");
return 0;
}

