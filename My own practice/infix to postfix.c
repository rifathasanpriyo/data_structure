#include <stdio.h>
#include <ctype.h>

#define size 20
int stack[size];
int total = -1;

void push(int x)
{
    total = total + 1;
    stack[total] = x;
}

int pop()
{
    int valu = stack[total];
    total = total - 1;
    return valu;
}

int prio(char x)
{
    if (x == '(' || x == ')')
    {
        return 0; // '(' and ')' have the lowest precedence
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
}

int main()
{
    char s[100];
    char *e, x;
    scanf("%s", s);
    e = s;
    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
        }
        else if (*e == '(')
        {
            push(*e);
        }
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (total != -1 && prio(stack[total]) >= prio(*e))
            {
                x = pop();
                if (x != '(') // Ignore '(' when popping
                    printf("%c", x);
            }
            push(*e);
        }
        e++;
    }
    while (total != -1)
    {
        printf("%c", pop());
    }

    return 0;
}
