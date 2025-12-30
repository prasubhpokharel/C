#include <stdio.h>
int rec(int);
int main() 
{
    int i,n;
    printf("Enter nth term: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",rec(i));
    }    
    return 0;
}

int rec(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return rec(n-1) + rec(n-2);
}