#include<stdio.h>
int main()
{
    int a,sum = 0;
    int i=1;
    scanf("%d",&a);
    
    while(i <= a/2){
      if(a % i == 0){
          sum += i;
      }
      i++;
    }
    printf("%d%d\n",a,sum);
    if(a == sum){
        printf("%d is a perfect number",a);
    } else {
        printf("%d is not a perfect number",a);
    }
}
