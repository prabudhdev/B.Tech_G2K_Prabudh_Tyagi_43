#include <stdio.h>
#include<string.h>
int main(){
    int n,i,reversed=0,original,remainder;
    printf("enter a no.:");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        remainder = n % 10;
        reversed= reversed*10 + remainder ;
        n/=10;
    }
   if(original== reversed){
      printf("%d is a palindrome no.",original);

   }else{
     printf("%d is  not a palindrome no.",original);
   }
   return 0;
}