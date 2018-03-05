#include<stdio.h>
int a[10],top=-1,bottom=0;
void enqueue(int x)
{




    if(top>=9)
    {
        printf("\nQueue overflow");
    }
    else{
    a[++top]=x;
    }

}
void dequeue()
{
    if(top==-1)
    {
        printf("\nEmpty Queue");
    }
    bottom++;

}
void displaytop()
{
    printf("\n%d",a[top]);
}
void displayall()
{
    int i;
    for(i=bottom;i<=top;i++)
    {
        printf("\n%d",a[i]);
    }
}
int main()
{
    int c,n;
    printf("\n1.Insert\n2.Delete\n3.Display First\n4.Display All\nExit");
    while(1)
    {
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        printf("\nEnter Number");
        scanf("%d",&n);
        enqueue(n);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        displaytop();
        break;
    case 4:
        displayall();
        break;
    default:
        break;


    }
    if(c>4||c<=0)
    {
        break;
    }
    }
}

