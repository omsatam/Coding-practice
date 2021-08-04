
#include <stdio.h>

int main()
{
    int a, b;
    int c,lcm;
    
    
    scanf("%d%d",&a,&b);
    (a > b) ? (c=a) : (c = b) ;
    while(c <= a*b){
        if ((c % a == 0) && (c % b == 0)){
            lcm = c;
            break;
        }
        c++;
    }
    printf("The lcm is %d ",lcm);

    return 0;
}
