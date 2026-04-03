#include <stdio.h>

int main (){

    int fact=1,i,n;// variables declared here 


    printf("Enter your number:");
    scanf("%d",&n);//input from user  that store in n variable.

    for(i=1;i<=n;i++){

        fact = fact*i;// here fact =1 and multiply by i .

    }

    printf("%d\n",fact);

    return 0;
}
