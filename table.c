#include<stdio.h>
int main (){
    int i,n,table;
    printf("Enter your number :");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        table = i*n;
        printf("%d X %d = %d\n",n,i,table);
    }
   
}