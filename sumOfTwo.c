#include<stdio.h>
int main(){
 int n,sum=0,reminder;
 printf("Enter your number:");
 scanf("%d",&n);
 if (n<0){
    n=-n;
 }
 while (n>0){
    reminder = n%10;
    sum = sum + reminder;
    n = n/10;
 }
 printf("the sum of digit is :%d\n",sum);
 return 0;
}
