#include<stdio.h>
int main(){
    char op;
    double a,b,res;
    printf("enter operators(+,-,*,/):");
    scanf("%c",&op);
    printf("enters two no.:");
    scanf("%lf %lf",&a,&b);
    switch(op){
        case '+':
        res =a+b;
        break;  
        case '-':
        res =a-b;
        break;
        case '*':
        res =a*b;
        break;
        case '/':
        if(b !=0) {
            res = a/b;
        }else{
            printf("Eror! 0 se devide nahi hoga.");
            break;
            default:
            printf("Worng operator!");
        }
}
printf("Result : %.2lf",res);
return 0;
}