#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int i=0;
    while(i<=n){
        if (i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is odd\n",i);  
        }
        i++; 
    }
    return 0;
}