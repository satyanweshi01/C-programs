#include <stdio.h>

int add(int a, int b) { return a+b; }
int mul(int a, int b) { return a*b; }
int div(int a, int b) { return a/b; }

int calculate(int (*func)(int,int), int a, int b) {
  return func(a, b);
}



void print_opration(int value)
{
    printf("%d\n",value);
}

typedef struct obj
{
    int value;
    void (*func_ptr)(int); // function pointer

}obj;


int main(void)
{
    //structure
    obj new_object_t = {
        .value = 12,
        .func_ptr = print_opration
    };
    new_object_t.func_ptr(new_object_t.value);

    //normal initialisation
    int (*ptr)(int, int);
    ptr = add;
    printf("%d\n",ptr(3,5));

    //function getting passes as actual parameter
    // printf("%d\n",calculate(add,3,3));
    // printf("%d\n",calculate(mul,3,3));
    // printf("%d\n",calculate(div,3,3));

    //function pointer array
    int (*operation[3])(int,int) = { add, mul, div };
    for (int i = 0; i<3; i++)
    {
        print_opration(operation[i](6,-3));
    }


    return 0;
}