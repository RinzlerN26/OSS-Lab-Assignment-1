#include <stdio.h>
#include <stdlib.h>
int rev=0; int digit;
int recurse(int y)
{
         if(y!=0)
        {
           digit=y%10;
           rev=rev*10+digit;
           y=y/10;
           recurse(y);
        }
    return rev;
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int p=recurse(num);
    printf("reverse:%d",p);
    return 0;
}
