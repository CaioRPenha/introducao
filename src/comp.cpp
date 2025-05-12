#include<iostream>
#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    int big;

    scanf("%d %d %d", &a,&b,&c);

    big = a;
    if( big < b ){
        big = b;
    }

    if(big < c){
        big = c;
    }

    printf("o maior valor é %d", big);

    return 0;
}