
#include <stdio.h>

int main()
{
    int x,count=0;
    scanf("%d", &x);
    if((x & (x-1))==0)
    {
        while(x&1!=1)
        {
            count++;
            x>>=1;
        }
        if(count%2==0)
        {
        printf("power of 4");
        }
    }
    else
    {
        printf("not a power of 4");
    }

    return 0;
}

