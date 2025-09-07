#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if (ch >= 'A' && ch <= 'Z')
    {
    printf(" this is a capital letter : \n",ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
    printf("this is a small letter\n" ,ch); 
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("this is a digit\n",ch);
    }
    else
    {      
    printf("this is a symbol\n",ch);
    }
    return 0;
}