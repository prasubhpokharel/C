#include <stdio.h>

int main() 
{
    int n = 4, i , c = 0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    } 
    if(c==2)
        printf("Prime");
    else
        printf("COmpodite");
    return 0;
}