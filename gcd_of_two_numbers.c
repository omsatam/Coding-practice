
#include <stdio.h>

int main()
{
    int a, b;
    int c,gcd,i = 2;
    
    
    scanf("%d%d",&a,&b);
    (a < b) ? (c=a) : (c = b) ;
    while(i <= c){
        if ((a % i == 0) && (b % i == 0)){
            gcd = i;
            i++;
        }
        i++;
    }
    printf("The gcd is %d ",gcd);

    return 0;
}
