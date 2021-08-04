#include<stdio.h>
int main(){
    int a,i,prime=0;
    scanf("%d",&a);
    for (i=2;i<=a/2;i++){
        if (a%i==0){
            prime = 1;
            break;
        }
    }
    if(prime){
    // printf("%d\n",prime);
    printf("%d is a not a prime number ",a);
    }
    else{
        printf("%d is a prime number ",a);
    }
    
}
