#include<iostream>

int main(){
   int k = 0, n;
   scanf("%d", &n);
   while( n != 0 )
    {
        k += n;
        scanf("%d", &n);
    }
    printf("%d", k);
return 0;
}