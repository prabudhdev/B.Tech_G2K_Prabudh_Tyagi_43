#include<stdio.h>
int main(){
    char wrd;   
    printf("Enter a word:");
    scanf("%c",&wrd);
    if(wrd=='a'|| wrd=='A' && wrd=='e'|| wrd=='E' && wrd=='i'||wrd=='I' && wrd=='o'||wrd=='O' && wrd=='u'|| wrd=='U'){
        printf("it's vowel");
    }else{
        printf("not a vowel");

    }
    return 0;
}