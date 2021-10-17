#include <stdio.h>
int binary(int bin1, int bin2)
{
    int i = 0,a[20],r=0;
    int product= 0;
    while (bin1!= 0 || bin2!= 0)
    {
        a[i++] =(bin1%10+bin2%10+r) % 2;
        r=(bin1%10+bin2%10+r) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }
    if (r!= 0)
        a[i++]=r;
    --i;
    while (i >= 0)
        product= product* 10 + a[i--];
    return product;
}
 
int main()
{
 
    long bin1, bin2,multiply=0;
   
    int i = 0,digit,r= 0,a[20],factor = 1;
    while(1){
    printf("Enter operation:\n");
    printf("1.Addition\n2.Multiplication\n3.Exit\n");
    int n;
      scanf("%d",&n);
      if(n==1){
    printf("Enter the first binary number: ");
    scanf("%ld", &bin1);
    printf("Enter the second binary number: ");
    scanf("%ld", &bin2);
    while (bin1 != 0 || bin2 != 0)
    {
        a[i++]=(bin1%10+bin2%10+r) % 2;
        r=(bin1%10+bin2%10+r) / 2;
        bin1 = bin1/ 10;
        bin2 = bin2/ 10;
    }
    if (r!= 0)
        a[i++] = r;
    --i;
    printf("Sum of two binary numbers: ");
    while (i >= 0)
        printf("%d", a[i--]);

      printf("\n");}

      else if(n==2){
    printf("Enter the first binary number: ");
    scanf("%ld", &bin1);
    printf("Enter the second binary number: ");
    scanf("%ld", &bin2);
    while (bin2 != 0)
    {
        digit =  bin2 % 10;
        if (digit == 1)
        {
            bin1 = bin1 * factor;
            multiply = binary(bin1, multiply);
        }
        else
            bin1 = bin1 * factor;
        bin2 = bin2 / 10;
        factor = 10;
    }
    printf("Product of two binary numbers: %ld", multiply);
    printf("\n");

      }
      else if(n==3){
          break;
      }
    }
    return 0;
}
