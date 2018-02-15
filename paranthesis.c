#include<stdio.h>
#include<string.h>
int top=-1;
char a[20];
void push(char x)
{
    top++;
    a[top]=x;
}
void pop()
{
    top--;
}
int main()
{
    int i=0,flag=0;
    char str[20];
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
            {
                flag=1;
                push(str[i]);
            }
            else
            {
                if(str[i]==')'&&a[top]=='(')
                {
                    flag=0;
                    pop();
                }
                else if(str[i]=='}'&&a[top]=='{')
                    {
                        flag=0;
                        pop();
                        }
                else if(str[i]==']'&&a[top]=='[')
                {
                    flag=0;
                    pop();
                }
                else
                {
                    flag=1;
                    break;
                }
            }
    }
    if(flag==0)
    {
        printf("\nYES");
    }
    else
        {
        printf("\nNO");
        }
}
