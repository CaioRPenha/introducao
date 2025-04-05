#include <iostream>
int main()
{
    
    int pos;
    scanf("%d",&pos);  
    if (pos < 6)
        {
            printf("classificado");
        }
    else if (pos==6 || pos==7)
        {
            printf("repescagem");
        }
    else
        {
            printf("eliminado");
        }

return 0;
}