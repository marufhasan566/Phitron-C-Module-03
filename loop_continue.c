#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
