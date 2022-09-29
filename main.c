#include <stdio.h>
#include <conio.h>
#include<string.h>

<|...commit changes from main to branch...>
    
main()
{
    char Str[10];
    int len,i;

    printf("\n enter a string: ");
    gets(Str);

    len = strlen(Str);

    printf("\n reverse string: ");
    for(i= len-1; i>=0; i--)
    {
        printf("%c",Str[i]);
    }
    getch();
}




