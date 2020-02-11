#include<stdio.h>

double root(double n){
  double lo = 0, hi = n, mid;
  for(int i = 0 ; i < 1000 ; i++){
      mid = (lo+hi)/2;
      if(mid*mid == n) return mid;
      if(mid*mid > n) hi = mid;
      else lo = mid;
  }
  return mid;
}


int main(void)
{
double n;
printf("Enter number\n");
scanf("%lf",&n);
printf("Sqrt of %lf is %lf\n",n,root(n));
return 0;
}
