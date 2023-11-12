#include<stdio.h>
int main()
{
    int i, lower, upper;
    scanf("%d
%d", &lower, &upper);
    for(i=lower; i<=upper; i++)
    {
        int temp=i, sdn=1;
        while(temp>0)
        {
            int digit = temp%10;
            if(digit == 0 || i%digit!=0) sdn=0;
            temp/=10;
        }
        if(sdn==1) printf("%d ", i);
    }
}