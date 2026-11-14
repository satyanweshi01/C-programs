#include <stdio.h>
#include "is_parentheses_balanced.h"

int main(void)
{
    int ch;
    scanf("%d",&ch);
    char string[ch];
    scanf("%s",string);

    if (is_balanced(string,ch)==-1)
    {
        printf("Parentheses sequence is unbalanced\n");
    }
    else
    {
        printf("Parentheses sequence is balanced\n");
    }

    return 0;
}
