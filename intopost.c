#include<stdio.h>
#include<string.h>
int top=-1;
char a[20];
void push(char x)
{
    top++;
    a[top]=x;
}
char pop()
{
    return a[top--];
}
int priority(char x)
{
    if(x=='^')
    {
        return 3;
    }
    else if(x=='*'||x=='/')
    {
        return 2;
    }
    else if(x=='+'||x=='-')
    {
        return 1;
    }
    else if(x=='(')
        {
            return 0;
        }
        else{
            return 0;
        }
}
int main()
{
    int i=0;
    char str[20];
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='('||str[i]=='^')
        {
            if(top==-1)
            {
                push(str[i]);
            }
            else if(priority(a[top])>=priority(str[i])&&str[i]!='(')
            {
                while(priority(a[top])>=priority(str[i])&&top!=-1)
                   {printf("%c",pop());}
                push(str[i]);
            }
            else
            {
                push(str[i]);
            }
        }
        else if(str[i]==')')
        {
            while(a[top]!='(')
            {
                printf("%c",pop());
            }
            pop();
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    while(top!=-1)
    {
        printf("%c",pop());
    }

}

