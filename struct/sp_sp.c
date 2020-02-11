#include<stdio.h>

struct s{
char *sa;
};

int main(void)
{
char str[20];
struct s *z=NULL;
struct s z1;
z=&z1;
//z->sa="1234";
printf("enter String\n");
scanf("%10[^\n]s",str);
z->sa=str;
printf("Entered data:%s\n",z->sa);

return 0;
}
