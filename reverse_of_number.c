#include <stdio.h>

int main()
{
    int a,b,rem;
    int rev = 0;
    scanf("%d",&a);
    b = a;
    while(a!=0){
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10 ;
    }
    printf("The reverse of %d is %d",b,rev);

    return 0;
}
