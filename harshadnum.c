// Harshad number // 
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,i,rem,sum =0;
    while(t!=0)
    {
        rem= t%10;
        sum += rem;
        t /= 10;
    }
    n%= sum; // dividing the number by the sum of it's digits
    if(n==0 )
        printf("Harshad number");
    else
        printf("No");
   }
