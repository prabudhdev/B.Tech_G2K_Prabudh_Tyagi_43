#include<stdio.h> // HEADER FILE IN C.

#include<math.h>// HEADER FILE IN C.

int main(){

    int num,rem,sum,temp,i; 

    printf("Armstrong number from 1 to 100 are : \n");

    for(i=1;i<=100;i++)

    {

        temp = num;

        sum = 0;

        while (temp !=0)

      {

            rem = temp%10;

            sum = sum + rem*rem*rem;

            temp = temp/10;

        }

        if(sum==num){

            printf("%d",num);

        }
        
    }

    return 0;

}