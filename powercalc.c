#include<stdio.h>
int main (){
    int i,expo,pow;
    long long int result=1;
    printf("Enter your no. :");
    scanf("%d\n%d",&expo,&pow);

    for( i = 1 ; i <= expo ; i++ ){
      result *= expo;
    }
      printf("%d^%d = %lld\n", pow, expo, result);
}