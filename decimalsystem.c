#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        printf("Select one: \n1.Addition\n2.Multiplication\n3.Exit\n");
        printf("Enter operation: ");
        scanf("%d",&n);
        if(n==1)
        {
            long long int a,b;
            printf("Enter two decimal numbers:");
            scanf("%lld %lld", &a,&b);
            long long int sum=a+b;
            printf("Sum is: %lld \n",sum);
        }
        else if(n==2)
        {
            long long int m,n;
            printf("Enter two decimal numbers:");
            scanf("%lld %lld",&a,&b);
            printf("Product is: %lld \n",a*b);
        }
        else
        {
            printf("Exit");
            break;
        }
    }
    return 0;
}
