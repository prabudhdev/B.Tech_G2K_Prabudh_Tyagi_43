#include <stdio.h>
int main (){
    int fact=1,i,n;
    printf("Enter your number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("%d\n",fact);
    return 0;
}
