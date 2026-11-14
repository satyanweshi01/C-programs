#ifndef IS_PARENTHESES_BALANCED_H
#define IS_PARENTHESES_BALANCED_H

typedef struct stack
{
	char data;
	struct stack *next;
}s;

void push(char ch);
int pop();
int is_balanced(char* string,int ch);

#endif