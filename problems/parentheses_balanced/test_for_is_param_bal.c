#include <stdio.h>

#include "is_parentheses_balanced.h"


static int tests = 0;
void test_run(int flag)
{
    tests++;
    if (flag == 1)
    {
        printf("Testcase [%d] passed\n", tests);
    }
    else
    {
        printf("Testcase [%d] failed\n", tests);
    }

    
}
int main(void)
{
    test_run((is_balanced("()",2) == 0));
    test_run((is_balanced("()()",4) == 0));
    test_run((is_balanced("((()))",6) == 0));
    test_run((is_balanced("(()(()))",8) == 0));

    test_run((is_balanced("(",1) == -1));
    test_run((is_balanced("())",3) == -1));
    test_run((is_balanced("(()()",5) == -1));
    test_run((is_balanced("(()))",5) == -1));
    test_run((is_balanced(")(",1) == -1));
    test_run((is_balanced("())(",4) == -1));

    printf("%d/10 Testcases passed\n",tests);


    return 0;
}
