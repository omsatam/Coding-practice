#include<stdio.h>
int main(){
    int a,fact = 1,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        fact *= i;
    }
    printf("the factorial of %d is %d",a,fact);
}
