#include<stdio.h>
int main()
{
    long long int sum=0;
    int n;
    printf("Enter the of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i+=1){
        // printf("%d\n",i);
        sum = sum+i;
    }
    printf("The sum is = %lld",sum);
    return 0;
}