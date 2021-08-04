#include<stdio.h>
int main()
{
    int a,sum = 0;
    int b = 0,c = 1,i=0;
    scanf("%d",&a);
    while(i < a){
       printf("%d ",sum);
        b = c;
        c = sum;
        sum = b + c;
        i++;
    }
}
