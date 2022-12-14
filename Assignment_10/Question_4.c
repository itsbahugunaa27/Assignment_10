#include<stdio.h>
int natural(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int n;
    printf("Enter a numbers\n");
    scanf("%d",&n);
    printf("The Naturals numbers are\n");
    natural(n);
    return 0;
}
