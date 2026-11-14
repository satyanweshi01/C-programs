#include <stdio.h>
#include <stdlib.h>

#include "is_parentheses_balanced.h"

s* top = NULL;
void push(char ch)
{
	s* temp = (s*)malloc(sizeof(s));
	temp->data = ch;
	temp->next = top;
	top = temp;
}
int pop()
{
	if (top != NULL)
	{
		s* temp = top;
		top=top->next;
		free(temp);
        return 0;
	}
	return -1;
}

int is_balanced(char string[],int ch)
{
    if (ch%2 != 0)
    {
        return -1;
    }
    for(int i = 0; i<ch; i++)
    {
        if (string[i] == '(')
        {
            push(string[i]);
        }
        if ((string[i]) == ')')
        {
            if (pop()==-1){
                return -1;
            }
        } 
    }

    return 0;
}